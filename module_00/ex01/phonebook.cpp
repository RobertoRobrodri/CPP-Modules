#include <iostream>
#include "phonebook.class.hpp"

// * Declarar constantes las funciones que no cambian las intances de las clases

int main(void)
{
	std::string str;

	std::cout << "Input a command" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cin >> str;
		if (!str.compare("EXIT"))
			break ;
		else if (!str.compare("ADD"))
			std::cout << "ADD" << std::endl;
		else if (!str.compare("SEARCH"))
			std::cout << "SEARCH" << std::endl;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
