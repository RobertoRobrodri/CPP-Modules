/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:44:12 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 10:44:14 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class Diamond_trap : public Scav_trap, public Frag_trap {
	public:

		Diamond_trap(void);
		Diamond_trap(std::string name);
		Diamond_trap(const Diamond_trap &diamond);
		virtual ~Diamond_trap(void);

		void whoAmI(void);
		Diamond_trap &operator=(const Diamond_trap &other);

	private:

		std::string	Name;
};

#endif
