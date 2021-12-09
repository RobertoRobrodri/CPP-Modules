#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) : _weapon(weapon_type) , _name(name)
{
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack(void) const {
	std::cout << get_name() << " attacks with his " << this->_weapon.getType() << std::endl;
}

std::string	HumanA::get_name(void) const {
	return (this->_name);
}
