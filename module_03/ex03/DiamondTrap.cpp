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

Diamond_trap::Diamond_trap (void) : Clap_trap("Generic Diamond_Trap_clap_trap"), Scav_trap("Generic Diamond_Trap_clap_trap"), Frag_trap("Generic Diamond_Trap_clap_trap") {
	std::cout << "Diamond_trap Default constructor called" << std::endl;
	this->Name = "Generic Diamond_Trap";
	this->_hp = FRAG_HP;
	this->_energy = SCAV_ENERGY;
	this->_ad = FRAG_AD;
}

Diamond_trap::Diamond_trap (std::string name) : Clap_trap(name + "_clap_trap"), Scav_trap(name), Frag_trap(name) {
	std::cout << "Diamond_trap Parameter constructor called" << std::endl;
	this->Name = name;
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

void	Diamond_trap::whoAmI(void) {
	std::cout << this->Name << std::endl;
	std::cout << this->Clap_trap::_name << std::endl;
}

Diamond_trap & Diamond_trap::operator=(const Diamond_trap &other) {
	this->_name = other._name;
	this->Name = other.Name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}
