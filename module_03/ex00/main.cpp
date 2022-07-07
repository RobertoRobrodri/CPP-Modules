/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:44:34 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 10:44:36 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	Clap_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);
	paco.takeDamage(20);

	Clap_trap pepe;
	pepe.takeDamage(0);
	pepe.attack("Papo");
	pepe.takeDamage(5);
	pepe.beRepaired(20);

	return (0);
}
