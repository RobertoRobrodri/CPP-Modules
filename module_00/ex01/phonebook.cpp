/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:32:13 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:32:15 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Phonebook::Phonebook(void) : _max(0) {
	std::cout << "Phonebook Constructor called" << std::endl;
}

Phonebook::~Phonebook(void) {
	std::cout << "Phonebook Destructor called" << std::endl;
}

void	Phonebook::add_contact(void)
{
	if (_max == MAX_CONTACT)
	{
		std::cout << "WARNING: Oldest contact will be Overwritten" << std::endl;
		for (int i = 0; i < MAX_CONTACT - 2; i++)
			this->_contact[i] = this->_contact[i + 1];
		this->_contact[this->_max - 1].fill_names();
	}
	else
	{
		this->_contact[this->_max].fill_names();
		this->_max++;
	}
}

void	Phonebook::display_columns(void)
{
	std::cout << std::right;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
}

void	Phonebook::search_contact(void)
{
	int	index;
	std::string buffer;

	index = 0;
	if (!this->_max)
		std::cout << "No contacts added" << std::endl;
	else
	{
		this->display_columns();
		for (int i = this->_max - 1; i >= 0; i--)
			this->_contact[i].display_available_contacts(i);
		std::cout << "Input desired index: ";
		std::cin >> buffer;
		if (buffer.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Invalid index" << std::endl;
			return ;
		}
		else
			index = std::atoi(buffer.c_str());
		if ((index < MAX_CONTACT && index >= 0) && index < _max)
			this->_contact[index].display_info();
		else
			std::cout << "Invalid input" << std::endl;
	}
}
