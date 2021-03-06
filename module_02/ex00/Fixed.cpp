#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
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
