/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:28:23 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:28:24 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	/*Scav_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);

	Clap_trap joseto("joseto");
	joseto.takeDamage(0);
	joseto.attack("Jhonny");
	joseto.takeDamage(5);
	joseto.beRepaired(4);


	Clap_trap yusepe(joseto);
	std::cout << yusepe.get_hp() << std::endl;
	std::cout << yusepe.get_name() << std::endl;

	yusepe.takeDamage(100);
	yusepe.beRepaired(-100);
	paco.guardGate();

	Scav_trap guille(paco);
	std::cout << guille.get_name() << std::endl;

	Frag_trap leroy("Leroy");
	leroy.takeDamage(0);*/

	Diamond_trap aberration("ABERRATION");
	aberration.guardGate();
	aberration.highFivesGuys();
	aberration.whoAmI();

	Diamond_trap pollo;
	pollo.whoAmI();

	pollo = aberration;
	pollo.whoAmI();
	return (0);
}
