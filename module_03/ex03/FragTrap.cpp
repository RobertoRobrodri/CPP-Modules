#include "FragTrap.hpp"

Frag_trap::Frag_trap (void) {
	this->_name = "Generic fragtrap";
	this->_hp = FRAG_HP;
	this->_energy = FRAG_ENERGY;
	this->_ad = FRAG_AD;
	std::cout << "Frag_trap Default constructor called" << std::endl;
}

Frag_trap::Frag_trap (std::string name) {
	std::cout << "Frag_trap Parameter constructor called" << std::endl;
	this->_name = name;
	this->_hp = FRAG_HP;
	this->_energy = FRAG_ENERGY;
	this->_ad = FRAG_AD;
}

Frag_trap::Frag_trap (const Frag_trap &trap) {
	std::cout << "Frag_trap Copy constructor called" << std::endl;
	*this = trap;
}

Frag_trap::~Frag_trap (void) {
	std::cout << "Frag_trap Destructor called" << std::endl;
}