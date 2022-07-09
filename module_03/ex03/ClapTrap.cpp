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
ClapTrap::ClapTrap (void) : _name("Generic claptrap"), _hp(HP), _energy(ENERGY), _ad(AD) {
	std::cout << "Claptrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap (std::string name) : _name(name), _hp(HP), _energy(ENERGY), _ad(AD) {
	std::cout << "Claptrap Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &trap) {
	std::cout << "Claptrap Copy constructor called" << std::endl;
	*this = trap;
}

ClapTrap::~ClapTrap (void) {
	std::cout << "Claptrap Destructor called" << std::endl;
}

/* GETTERS && SETTERS */

std::string ClapTrap::get_name(void) const {
	return (this->_name);
}

unsigned int	ClapTrap::get_hp(void) const {
	return (this->_hp);
}

unsigned int	ClapTrap::get_ad(void) const {
	return (this->_ad);
}

unsigned int	ClapTrap::get_energy(void) const {
	return (this->_energy);
}

void	ClapTrap::set_hp(int ammount) {
	this->_hp = ammount;
}

/*	ACTION FUNCTIONS  */
void ClapTrap::attack(std::string const & target) {
	std::cout << this->get_name() << " attacks " << target << " causing " << this->get_ad() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->get_name() << " takes " << amount << " of damage " << std::endl;
	if ((int)this->get_hp() - (int)amount >= 0)
		this->set_hp(this->get_hp() - amount);
	else
		this->set_hp(0);
	std::cout << this->get_name() << " Current HP " << this->get_hp() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->get_name() << " heals " << amount << " HP " << std::endl;
	this->set_hp(this->get_hp() + amount);
	std::cout << this->get_name() << " Current HP " << this->get_hp() << std::endl;
}

/*OVERLOADING*/
ClapTrap & ClapTrap::operator=(ClapTrap const &cp) {
	this->_name = cp._name;
	this->_hp = cp._hp;
	this->_ad = cp._ad;
	this->_energy = cp._energy;
	return *this;
}
