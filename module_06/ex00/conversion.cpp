#include "conversion.hpp"

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
