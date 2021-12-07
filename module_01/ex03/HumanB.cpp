#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	std::cout << "HumanB constructor called" << std::endl;
	this->_name = name;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack(void) {
	std::cout << get_name() << " attacks with his " << this->_weapon.getType() << std::endl;
}

void	setWeapon(Weapon &weapon){
	this->_weapon = weapon;
}
