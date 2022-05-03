/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:30:33 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:30:36 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "phonebook.h"

class Contact {

	private:

	std::string info[5];

	public:

	Contact(void);
	~Contact(void);

	void	fill_names(void);
	void	display_available_contacts(int index);
	void	display_info(void);
};
#endif
