/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:32:00 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:32:02 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include <string>

int main(void)
{
	std::string str;
	Phonebook	phonebook;

	std::cout << "USER : ";
	while (getline(std::cin, str))
	{
		std::cout << "El str" << str << std::endl;
		if (!str.compare("EXIT"))
			break ;
		else if (!str.compare("ADD"))
			phonebook.add_contact();
		else if (!str.compare("SEARCH"))
			phonebook.search_contact();
		std::cout << "USER : ";
		str.clear();
	}
	return (0);
}
