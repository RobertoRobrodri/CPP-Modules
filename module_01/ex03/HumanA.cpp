#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) {
	std::cout << "HumanA constructor called" << std::endl;
	this->_name = name;
	this->_weapon = weapon_type;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack(void) {
	std::cout << get_name() << " attacks with his " << this->_weapon.getType() << std::endl;
}
