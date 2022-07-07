#include "FragTrap.hpp"

Frag_trap::Frag_trap (void) {
	this->_name = "Generic fragtrap";
	this->_hp = FRAG_HP;
	this->_energy = FRAG_ENERGY;
	this->_ad = FRAG_AD;
	std::cout << "Frag_trap Default constructor called" << std::endl;
}

Frag_trap::Frag_trap (std::string name) : Clap_trap(name) {
	std::cout << "Frag_trap Parameter constructor called" << std::endl;
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

Frag_trap & Frag_trap::operator=(const Frag_trap &other) {
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}

void Frag_trap::highFivesGuys(void) {
	std::cout << "High five request accepted " << std::endl;
}
