#include "Weapon.hpp"

Weapon::Weapon (std::string type) {
	std::cout << "Weapon constructor called" << std::endl;
	this->_type = type;
}

Weapon::~Weapon (void) {
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string&	Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
