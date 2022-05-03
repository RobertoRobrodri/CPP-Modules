/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:56:02 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:56:04 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("Carl");
	Zombie paco("Paco");
	paco.announce();
	Zombie pepe;
	pepe.announce();
	return (0);
}
