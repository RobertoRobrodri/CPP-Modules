/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:44:12 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 10:44:14 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*	BASIC STUFF */
Clap_trap::Clap_trap (void) : _name("Generic claptrap"), _hp(HP), _energy(ENERGY), _ad(AD) {
	std::cout << "Claptrap Default constructor called" << std::endl;
}

Clap_trap::Clap_trap (std::string name) : _name(name), _hp(HP), _energy(ENERGY), _ad(AD) {
	std::cout << "Claptrap Parameter constructor called" << std::endl;
}

Clap_trap::Clap_trap (const Clap_trap &trap) {
	std::cout << "Claptrap Copy constructor called" << std::endl;
	*this = trap;
}

Clap_trap::~Clap_trap (void) {
	std::cout << "Claptrap Destructor called" << std::endl;
}

/* GETTERS && SETTERS */

std::string Clap_trap::get_name(void) const {
	return (this->_name);
}

unsigned int	Clap_trap::get_hp(void) const {
	return (this->_hp);
}

unsigned int	Clap_trap::get_ad(void) const {
	return (this->_ad);
}

unsigned int	Clap_trap::get_energy(void) const {
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
	if ((int)this->get_hp() - (int)amount >= 0)
		this->set_hp(this->get_hp() - amount);
	else
		this->set_hp(0);
	std::cout << this->get_name() << " Current HP " << this->get_hp() << std::endl;
}

void Clap_trap::beRepaired(unsigned int amount) {
	std::cout << this->get_name() << " heals " << amount << " HP " << std::endl;
	this->set_hp(this->get_hp() + amount);
	std::cout << this->get_name() << " Current HP " << this->get_hp() << std::endl;
}

/*OVERLOADING*/
Clap_trap & Clap_trap::operator=(Clap_trap const &cp) {
	this->_name = cp._name;
	this->_hp = cp._hp;
	this->_ad = cp._ad;
	this->_energy = cp._energy;
	return *this;
}
