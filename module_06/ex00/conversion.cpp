#include "conversion.hpp"

conversion::conversion(void) : literal(""), _i(0), _d(0), _f(0), _c(0) {
}

conversion::conversion(std::string str) : literal(str), _i(0), _d(0), _f(0), _c(0) {
}

//Constructor + casting
conversion::conversion(float f) {
	this->_i = static_cast<int>(f);
	this->_d = static_cast<double>(f);
	this->_c = static_cast<char>(f);
	this->_f = f;
}

conversion::conversion(int i) {
	this->_f = static_cast<float>(i);
	this->_d = static_cast<double>(i);
	this->_c = static_cast<char>(i);
	this->_i = i;
}

conversion::conversion(double d) {
	this->_i = static_cast<int>(d);
	this->_f = static_cast<float>(d);
	this->_c = static_cast<char>(d);
	this->_d = d;
}

conversion::conversion(char c) {
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

//Other stuff

void	cast_exceptions(int i) {

		if (i == 1)
		{
			conversion excep_case(std::numeric_limits<float>::min());
			excep_case.print_casting();
		}
		else if (i == 2) 
		{
			conversion excep_case(std::numeric_limits<float>::max());
			excep_case.print_casting();
		}
		else if (i == 3) 
		{
			conversion excep_case(nanf(""));
			excep_case.print_casting();
		}
		else if (i == 4)
		{
			conversion excep_case(std::numeric_limits<int>::min());
			excep_case.print_casting();
		}
		else if (i == 5)
		{
			conversion excep_case(std::numeric_limits<int>::max());
			excep_case.print_casting();
		}
		else if (i == 6)
		{
			conversion excep_case(nan(""));
			excep_case.print_casting();
		}
}

void	conversion::check_exceptions(void) const {
	std::string comparisons[] {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++) {
		if (comparisons[i].compare(this->getLiteral()) == 0)
			cast_exceptions(i + 1);
	};
}

void	conversion::print_casting(void) const {
	if (std::isprint(this->getChar()))
			std::cout << "Char: " << this->getChar() << std::endl;
		else
			std::cout << "Char: " << "Non displayable" << std::endl;
		std::cout << "Int: " << this->getNumberInt() << std::endl;
		std::cout << "Double: " << this->getNumberDouble() << std::endl;
		std::cout << "Float: " << this->getNumberFloat() << "f" << std::endl;
}

void	conversion::char_case(void) const {
	if (this->literal.length() == 1 && std::isalpha(this->literal[0]))
	{
		char	aux = this->literal[0];
		conversion char_case(aux);
		char_case.print_casting();
	};
}

void	conversion::int_case(void) const {
	if (this->literal.find_first_not_of("0123456789") == std::string::npos)
	{
		int	aux = std::atoi(this->literal.c_str());
		conversion int_case(aux);
		int_case.print_casting();
	};
}

void	conversion::float_case(void) const {
	if (this->literal.find_first_not_of("0123456789.f") == std::string::npos
		&& this->literal.find("f", this->literal.length() - 1) != std::string::npos)
	{
		float aux = std::atof(this->literal.c_str());
		conversion float_case(aux);
		float_case.print_casting();
	};
}

void	conversion::double_case(void) const {
	if (this->literal.find_first_not_of("0123456789.") == std::string::npos
		&& this->literal.find(".") != std::string::npos)
	{
		double aux = std::strtod(this->literal.c_str(), NULL);
		conversion double_case(aux);
		double_case.print_casting();
	};
}