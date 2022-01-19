#include "ClapTrap.hpp"

/*	BASIC SHIT */
Clap_trap::Clap_trap (void) : _name("Generic claptrap"), _hp(HP), _energy(ENERGY), _ad(AD) {
	std::cout << "Clap_trap Default constructor called" << std::endl;
}

Clap_trap::Clap_trap (std::string name) : _name(name), _hp(HP), _energy(ENERGY), _ad(AD) {
	std::cout << "Clap_trap Parameter constructor called" << std::endl;
}

Clap_trap::Clap_trap (const Clap_trap &trap) {
	std::cout << "Clap_trap Copy constructor called" << std::endl;
	*this = trap;
}

Clap_trap::~Clap_trap (void) {
	std::cout << "Clap_trap Destructor called" << std::endl;
}

/* GETTERS && SETTERS */

std::string Clap_trap::get_name(void) const {
	return (this->_name);
}

int	Clap_trap::get_hp(void) const {
	return (this->_hp);
}

int	Clap_trap::get_ad(void) const {
	return (this->_ad);
}

int	Clap_trap::get_energy(void) const {
	return (this->_energy);
}

void	Clap_trap::set_hp(int ammount) {
	this->_hp = ammount;
}

/*	ACTION FUNCTIONS  */
void Clap_trap::attack(std::string const & target) {
	std::cout << this->get_name() << " attacks " << target << " causing " << this->get_ad() << std::endl;
}

void Clap_trap::takeDamage(unsigned int amount) {
	std::cout << this->get_name() << " takes " << amount << " of damage " << std::endl;
	this->set_hp(this->get_hp() - amount);
	std::cout << this->get_name() << " Current HP " << this->get_hp() << std::endl;
}

void Clap_trap::beRepaired(unsigned int amount) {
	std::cout << this->get_name() << " heals " << amount << " HP " << std::endl;
	this->set_hp(this->get_hp() + amount);
	std::cout << this->get_name() << " Current HP " << this->get_hp() << std::endl;
}