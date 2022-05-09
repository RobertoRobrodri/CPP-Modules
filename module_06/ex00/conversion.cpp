#include "conversion.hpp"

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

//Other stuff

void	conversion::char_case(void) {
	if (std::isprint(this->getChar()) == 0)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << this->getChar() << std::endl;
	std::cout << "Int: " << this->getNumberInt() << std::endl;
	std::cout << "Float: " << this->getNumberFloat() << std::endl;
	std::cout << "Double: " << this->getNumberDouble() << std::endl;
}

void	conversion::int_case(void) {
	if (std::isprint(this->getChar()) == 0)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << this->getChar() << std::endl;
	std::cout << "Int: " << this->getNumberInt() << std::endl;
	std::cout << "Float: " << this->getNumberFloat() << std::endl;
	std::cout << "Double: " << this->getNumberDouble() << std::endl;
}
