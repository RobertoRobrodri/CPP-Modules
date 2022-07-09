/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:26:38 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:26:39 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);

	ClapTrap joseto("joseto");
	joseto.takeDamage(0);
	joseto.attack("Jhonny");
	joseto.takeDamage(5);
	joseto.beRepaired(4);

	/* Copy constructor works*/
	ClapTrap yusepe(joseto);
	std::cout << yusepe.get_hp() << std::endl;
	std::cout << yusepe.get_name() << std::endl;

	yusepe.takeDamage(100);
	yusepe.beRepaired(-100);
	paco.guardGate();

	ScavTrap guille(paco);
	std::cout << guille.get_name() << std::endl;
	return (0);
}
