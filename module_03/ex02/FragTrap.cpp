/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:27:27 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:27:33 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (void) {
	this->_name = "Generic fragtrap";
	this->_hp = FRAG_HP;
	this->_energy = FRAG_ENERGY;
	this->_ad = FRAG_AD;
	std::cout << "Frag_trap Default constructor called" << std::endl;
}

FragTrap::FragTrap (std::string name) : ClapTrap(name) {
	std::cout << "Frag_trap Parameter constructor called" << std::endl;
	this->_hp = FRAG_HP;
	this->_energy = FRAG_ENERGY;
	this->_ad = FRAG_AD;
}

FragTrap::FragTrap (const FragTrap &trap){
	std::cout << "Frag_trap Copy constructor called" << std::endl;
	*this = trap;
}

FragTrap::~FragTrap (void) {
	std::cout << "Frag_trap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &other) {
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_ad = other._ad;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High five request accepted " << std::endl;
}

void	FragTrap::attack(std::string const &target) {
	std::cout << "Fragtrap attacks " << target << " making " << this->get_ad() << " and there's no way i need to made this function instead of inheriting "<<std::endl;
}
