#include "ScavTrap.hpp"

Scav_trap::Scav_trap (void) {
	this->_name = "Generic scavtrap";
	this->_hp = SCAV_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = SCAV_AD;
	std::cout << "Scav_trap Default constructor called" << std::endl;
}

Scav_trap::Scav_trap (std::string name) : Clap_trap(name) {
	std::cout << "Scav_trap Parameter constructor called" << std::endl;
	this->_hp = SCAV_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = SCAV_AD;
}

Scav_trap::Scav_trap (const Scav_trap &trap) {
	std::cout << "Scav_trap Copy constructor called" << std::endl;
	*this = trap;
}

Scav_trap::~Scav_trap (void) {
	std::cout << "Scav_trap Destructor called" << std::endl;
}

void Scav_trap::guardGate() {
	std::cout << this->get_name() << " entered gate keeper mode" << std::endl;
}

Scav_trap & Scav_trap::operator=(const Scav_trap &other) {
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}
