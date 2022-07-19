#include "conversion.hpp"

conversion::conversion(void) : _i(0), _d(0), _f(0), _c(0), flag(0), literal("") {
}

conversion::conversion(std::string str) : _i(0), _d(0), _f(0), _c(0), flag(0), literal(str) {
}

conversion::conversion(conversion const & conv) {
	*this = conv;
}

//Constructor + casting
conversion::conversion(float f) : flag(0) {
	this->_i = static_cast<int>(f);
	this->_d = static_cast<double>(f);
	this->_c = static_cast<char>(f);
	this->_f = f;
}

conversion::conversion(int i) : flag(1) {
	this->_f = static_cast<float>(i);
	this->_d = static_cast<double>(i);
	this->_c = static_cast<char>(i);
	this->_i = i;
}

conversion::conversion(double d) : flag(0) {
	this->_i = static_cast<int>(d);
	this->_f = static_cast<float>(d);
	this->_c = static_cast<char>(d);
	this->_d = d;
}

conversion::conversion(char c) : flag(1) {
	this->_i = static_cast<int>(c);
	this->_f = static_cast<float>(c);
	this->_d = static_cast<double>(c);
	this->_c = c;
}

conversion::~conversion() {}


// Getters
float	const & conversion::getNumberFloat(void) const {
	return this->_f;
}

int	const & conversion::getNumberInt(void) const {
	return this->_i;
}

double	const & conversion::getNumberDouble(void) const {
	return this->_d;
}

char const & conversion::getChar(void) const {
	return this->_c;
}

std::string	const & conversion::getLiteral(void) const {
	return this->literal;
}

bool const & conversion::getFlag(void) const {
	return this->flag;
}


//Overloading
conversion & conversion::operator=(conversion const & conv) {
	this->literal = conv.literal;
	this->flag = conv.flag;
	this->_i = conv._i;
	this->_d = conv._d;
	this->_c = conv._c;
	this->_f = conv._f;

	return *this;
}

//Other stuff

void	conversion::try_cases(void) const {
	bool (conversion::*func[]) () const = {&conversion::check_exceptions, &conversion::int_case, &conversion::char_case,
		&conversion::float_case, &conversion::double_case};

	for (int i = 0; i < 5; i++)
	{
		if ((this->*func[i])() == true)
			return ;
	}
	throw conversion::WrongInput();
}

void	conversion::cast_exceptions(int i) const {

	if (i == 1)
	{
		conversion excep_case(std::numeric_limits<float>::infinity() * -1);
		excep_case.print_casting();
	}
	else if (i == 2)
	{
		conversion excep_case(std::numeric_limits<float>::infinity());
		excep_case.print_casting();
	}
	else if (i == 3)
	{
		std::cout << nanf("") << std::endl;
		conversion excep_case(nanf(""));
		excep_case.print_casting();
	}
	else if (i == 4)
	{
		conversion excep_case(std::numeric_limits<float>::infinity() * - 1);
		excep_case.print_casting();
	}
	else if (i == 5)
	{
		conversion excep_case(std::numeric_limits<float>::infinity());
		excep_case.print_casting();
	}
	else if (i == 6)
	{
		std::cout << nan("") << std::endl;
		conversion excep_case(nan(""));
		excep_case.print_casting();
	}
}

bool	conversion::check_exceptions(void) const {
	std::string comparisons[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++) {
		if (comparisons[i].compare(this->getLiteral()) == 0) {
			cast_exceptions(i + 1);
			return true;
		}
	};
	return false;
}

void	conversion::print_casting(void) const {
	if (std::isprint(this->getChar()))
			std::cout << "Char: " << this->getChar() << std::endl;
	else
		std::cout << "Char: " << "Non displayable" << std::endl;
	std::cout << "Int: " << this->getNumberInt() << std::endl;
	std::cout << "Double: " << this->getNumberDouble();
	if (this->getFlag())
		std::cout << ".0";
	std::cout << std::endl;
	std::cout << "Float: " << this->getNumberFloat();
	if (this->getFlag())
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

bool	conversion::char_case(void) const {
	if (this->literal.length() == 1 && std::isalpha(this->literal[0]))
	{
		char	aux = this->literal[0];
		conversion char_case(aux);
		char_case.print_casting();
		return true;
	};
	return false;
}

bool	conversion::int_case(void) const {
	if (this->literal.find_first_not_of("0123456789-") == std::string::npos
		&& this->dot_counter('-') <= 1
		&& (this->literal.find('-') == 0 || this->literal.find('-') == std::string::npos))
	{
		int	aux = atoi(this->literal.c_str());
		conversion int_case(aux);
		int_case.print_casting();
		return true;
	};
	return false;
}

bool	conversion::float_case(void) const {
	if (this->literal.find_first_not_of("0123456789-.f") == std::string::npos
		&& this->literal.find("f", this->literal.length() - 1) != std::string::npos
		&& this->dot_counter('.') == 1 && this->dot_counter('f') == 1 && this->dot_counter('-') <= 1
		&& (this->literal.find('-') == 0 || this->literal.find('-') == std::string::npos))
	{
		float aux = atof(this->literal.c_str());
		conversion float_case(aux);
		if (this->literal.rfind(".0f") != std::string::npos)
			float_case.flag = 1;
		float_case.print_casting();
		return true ;
	};
	return false;
}

bool	conversion::double_case(void) const {
	if (this->literal.find_first_not_of("0123456789.-") == std::string::npos
		&& this->literal.find(".") != std::string::npos
		&& this->dot_counter('.') == 1
		&& this->dot_counter('-') <= 1
		&& (this->literal.find('-') == 0 || this->literal.find('-') == std::string::npos))
	{
		double aux = strtod(this->literal.c_str(), NULL);
		conversion double_case(aux);
		if (this->literal.rfind(".0") != std::string::npos)
			double_case.flag = 1;
		double_case.print_casting();
		return true;
	};
	return false;
}

int	conversion::dot_counter(char to_find) const {
	int count = 0;
	size_t npos = this->literal.find(to_find);
	while(npos != std::string::npos)
    {
        count++;
        npos = this->literal.find(to_find, npos + 1);
    }
	return count;
}
