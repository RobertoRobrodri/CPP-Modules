/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:56:41 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:56:43 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie {
	private:

	std::string	_name;

	public:

	Zombie				(void);
	Zombie				(std::string name);
	~Zombie				(void);
	void				announce(void);
	void				set_name(std::string name);
	std::string			get_name(void);
};
Zombie* zombieHorde( int N, std::string name );

#endif
