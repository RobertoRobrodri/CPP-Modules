#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(int const i) {
//	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = i << this->_f_bits;
}

Fixed::Fixed(float const f) {
	this->_fixed_point = (int)(f * (1 << this->_f_bits));
//	std::cout << "Float constructor called" << std::endl;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixed_point = raw;
}

int Fixed::getRawBits( void ) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

float Fixed::toFloat( void ) const {
	return (float)this->_fixed_point / (float)(1 << this->_f_bits);
}

int Fixed::toInt( void ) const {
	return roundf(this->_fixed_point >> this->_f_bits);
}

Fixed	& Fixed::operator=(Fixed const &f) {
//	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = f.getRawBits();
	return (*this);
}

std::ostream	& operator<<(std::ostream &os, Fixed const &f) {
	os << f.toFloat();
	return (os);
}

// Arithmetic operations
Fixed	Fixed::operator+(Fixed const &f) const {
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed	Fixed::operator-(Fixed const &f) const {
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed	Fixed::operator*(Fixed const &f) const {
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed	Fixed::operator/(Fixed const &f) const {
	return Fixed(this->toFloat() + f.toFloat());
}

// Comparison operations
bool	Fixed::operator>(Fixed const &f) const{
	return (this->_fixed_point > f.getRawBits());
}

bool	Fixed::operator<(Fixed const &f) const{
	return (this->_fixed_point < f.getRawBits());
}

bool	Fixed::operator>=(Fixed const &f) const{
	return (this->_fixed_point >= f.getRawBits());
}

bool	Fixed::operator<=(Fixed const &f) const{
	return (this->_fixed_point <= f.getRawBits());
}

bool	Fixed::operator==(Fixed const &f) const{
	return (this->_fixed_point == f.getRawBits());
}

bool	Fixed::operator!=(Fixed const &f) const{
	return (this->_fixed_point != f.getRawBits());
}

// Pre && Pos Increment & Decrement
Fixed	Fixed::operator++(void) {
	Fixed	tmp;

	tmp._fixed_point = ++(this->_fixed_point);
	return tmp;
}

Fixed	Fixed::operator--(void) {
	Fixed	tmp;

	tmp._fixed_point = --(this->_fixed_point);
	return tmp;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp;

	tmp._fixed_point = this->_fixed_point++;
	return tmp;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp;
	tmp._fixed_point = this->_fixed_point--;
	return tmp;
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b) {
	return a < b ? a : b;
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b) {
	return a > b ? a : b;
}
