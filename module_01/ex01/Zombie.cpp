/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:56:35 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:56:37 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) : _name("Generic zombie") {
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie (std::string name) {
	std::cout << "Special constructor called" << std::endl;
	this->_name = name;
}

Zombie::~Zombie (void) {
	std::cout << this->get_name() << " Default destructor called" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->get_name() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

std::string	Zombie::get_name(void) {
	return (this->_name);
}
