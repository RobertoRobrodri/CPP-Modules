/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:57:05 by robrodri          #+#    #+#             */
/*   Updated: 2022/03/02 10:57:07 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;
	std::string	*stringPTR = &str;

	std::cout << str << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
}
