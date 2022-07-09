/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:44:12 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 10:44:14 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (void) : ClapTrap("Generic Diamond_Trap_clap_name"), ScavTrap("Generic Diamond_Trap_clap_name"), FragTrap("Generic Diamond_Trap_clap_name") {
	std::cout << "Diamond_trap Default constructor called" << std::endl;
	this->Name = "Generic Diamond_Trap";
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
}

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "Diamond_trap Parameter constructor called" << std::endl;
	this->Name = name;
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
}

DiamondTrap::DiamondTrap (const DiamondTrap &trap) {
	std::cout << "Diamond_trap Copy constructor called" << std::endl;
	*this = trap;
}

DiamondTrap::~DiamondTrap (void) {
	std::cout << "Diamond_trap Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << this->Name << std::endl;
	std::cout << this->ClapTrap::_name << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other) {
	this->_name = other._name;
	this->Name = other.Name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}

void	DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}
