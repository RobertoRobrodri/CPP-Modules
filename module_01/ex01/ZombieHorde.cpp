/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:56:47 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:56:50 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *horde;
	std::string	aux;

	horde = new Zombie[N];
	if (N > 0) {
		for (int i = 0; i < N; i++)
		{
			aux = name + "_" + std::to_string(i);
			horde[i].set_name(aux);
			horde[i].announce();
		}
	}
	return (horde);
}
