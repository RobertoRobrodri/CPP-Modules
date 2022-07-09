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
	/*ScavTrap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);

	ClapTrap joseto("joseto");
	joseto.takeDamage(0);
	joseto.attack("Jhonny");
	joseto.takeDamage(5);
	joseto.beRepaired(4);


	ClapTrap yusepe(joseto);
	std::cout << yusepe.get_hp() << std::endl;
	std::cout << yusepe.get_name() << std::endl;

	yusepe.takeDamage(100);
	yusepe.beRepaired(-100);
	paco.guardGate();

	ScavTrap guille(paco);
	std::cout << guille.get_name() << std::endl;

	FragTrap leroy("Leroy");
	leroy.takeDamage(0);*/

	DiamondTrap aberration("ABERRATION");
	aberration.guardGate();
	aberration.highFivesGuys();
	aberration.whoAmI();

	DiamondTrap pollo;
	pollo.whoAmI();

	pollo = aberration;
	pollo.whoAmI();
	pollo.attack("Yusepe");
	return (0);
}
