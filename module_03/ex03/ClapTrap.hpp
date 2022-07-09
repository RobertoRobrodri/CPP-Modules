/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:44:26 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 10:44:28 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>
# define HP 10
# define ENERGY 10
# define AD 0


class ClapTrap {

	public :

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &trap);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const &cp);

		std::string get_name(void) const ;
		unsigned int			get_hp(void) const;
		unsigned int			get_ad(void) const;
		unsigned int			get_energy(void) const;
		void		set_hp(int ammount);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected :
		std::string	_name;
		unsigned int			_hp;
		unsigned int			_energy;
		unsigned int			_ad;
};

#endif
