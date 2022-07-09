/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:26:20 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:26:22 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void) {
	this->_name = "Generic scavtrap";
	this->_hp = SCAV_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = SCAV_AD;
	std::cout << "Scav_trap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	std::cout << "Scav_trap Parameter constructor called" << std::endl;
	this->_hp = SCAV_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = SCAV_AD;
}

ScavTrap::ScavTrap (const ScavTrap &trap) {
	std::cout << "Scav_trap Copy constructor called" << std::endl;
	*this = trap;
}

ScavTrap::~ScavTrap (void) {
	std::cout << "Scav_trap Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << this->get_name() << " entered gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string target) {
	std::cout << this->get_name() << " oh, no, a SCAVTRAP is attacking, i wish i could inherit a fuction that outputs a message instead of making another function that does the same thing noooooo" << std::endl;
	std::cout << target << " receives " << this->get_ad() << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other) {
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}
