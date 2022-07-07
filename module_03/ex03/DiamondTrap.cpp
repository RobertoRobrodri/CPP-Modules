# include "DiamondTrap.hpp"

Diamond_trap::Diamond_trap (void) : Scav_trap("Generic DiamondTrap_claptrap"), Frag_trap("Generic DiamondTrap_claptrap") {
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
	this->_diamond_name = "Generic Diamondtrap";
	std::cout << "Diamond_trap Default constructor called" << std::endl;
}

Diamond_trap::Diamond_trap (std::string name) : Scav_trap("Generic DiamondTrap_claptrap"), Frag_trap(name + "_claptrap") {
	std::cout << "Diamond_trap Parameter constructor called" << std::endl;
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
	this->_diamond_name = name;
}

Diamond_trap::Diamond_trap (const Diamond_trap &trap) {
	std::cout << "Diamond_trap Copy constructor called" << std::endl;
	*this = trap;
}

Diamond_trap::~Diamond_trap (void) {
	std::cout << "Diamond_trap Destructor called" << std::endl;
}

std::string	Diamond_trap::getDiamondName(void) {
	return this->_diamond_name;
}

void	Diamond_trap::whoAmI(void) {
	std::cout << this->get_name() << std::endl;
	std::cout << this->getDiamondName() << std::endl;
}

Diamond_trap & Diamond_trap::operator=(const Diamond_trap &other) {
	this->_name = other._name;
	this->_diamond_name = other._diamond_name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}
