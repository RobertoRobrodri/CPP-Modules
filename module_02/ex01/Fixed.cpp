#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : _fixed_point(f._fixed_point) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _fixed_point(i) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : {
	std::cout << "Float constructor called" << std::endl;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixed_point = raw;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

Fixed	& Fixed::operator=(Fixed const &f) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = f.getRawBits();
	return (*this);
}

void	operator<<(std::ostream &os, Fixed &f) {
	os << f._fixed_point << std::endl;
}
