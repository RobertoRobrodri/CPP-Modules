/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:26:28 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:26:29 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define SCAV_HP 100
# define SCAV_ENERGY 50
# define SCAV_AD 20
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scav);
		virtual ~ScavTrap(void);

		void	attack(std::string const &target);
		void	guardGate();
		ScavTrap &operator=(const ScavTrap &other);
};

#endif
