/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:27:37 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:27:38 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define FRAG_HP 100
# define FRAG_ENERGY 100
# define FRAG_AD 30
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &scav);
		virtual ~FragTrap(void);

		void	attack(std::string const &target);
		FragTrap &operator=(const FragTrap &other);
		void highFivesGuys(void);
};

#endif
