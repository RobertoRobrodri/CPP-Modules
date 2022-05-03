/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:55:57 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:55:58 by robrodri         ###   ########.fr       */
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
Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
