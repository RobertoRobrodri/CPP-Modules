/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:28:16 by robrodri          #+#    #+#             */
/*   Updated: 2022/07/07 12:28:18 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define FRAG_HP 100
# define FRAG_ENERGY 100
# define FRAG_AD 30
# include "ClapTrap.hpp"

class Frag_trap : virtual public Clap_trap {
	public:

		Frag_trap(void);
		Frag_trap(std::string name);
		Frag_trap(const Frag_trap &scav);
		virtual ~Frag_trap(void);

		Frag_trap &operator=(const Frag_trap &other);
		void highFivesGuys(void);
};

#endif
