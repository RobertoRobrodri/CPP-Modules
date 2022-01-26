# include "DiamondTrap.hpp"

Diamond_trap::Diamond_trap (void) {
	this->_name = "Generic Diamondtrap";
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
	std::cout << "Diamond_trap Default constructor called" << std::endl;
}

Diamond_trap::Diamond_trap (std::string name) {
	std::cout << "Diamond_trap Parameter constructor called" << std::endl;
	this->_name = name;
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
}

Diamond_trap::Diamond_trap (const Diamond_trap &trap) {
	std::cout << "Diamond_trap Copy constructor called" << std::endl;
	*this = trap;
}

Diamond_trap::~Diamond_trap (void) {
	std::cout << "Diamond_trap Destructor called" << std::endl;
}

Diamond_trap::void whoAmI(void) {
	std::cout << this->get_name() << std::endl;
}
