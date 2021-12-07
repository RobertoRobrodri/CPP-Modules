#include "Zombie.hpp"

Zombie::Zombie (void) {
	std::cout << "Special constructor called" << std::endl;
//	this->_name = name;
}

Zombie::~Zombie (void) {
	std::cout << this->get_name() << " Default destructor called" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

std::string	Zombie::get_name(void) {
	return (this->_name);
}
