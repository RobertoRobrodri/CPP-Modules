#include "phonebook.h"

void Contact::fill_names(std::string str)
{
	std::cout << "Insert First Name: ";
	getline(std::cin, this->first_name);
	std::cout << "Insert Last Name: ";
	getline(std::cin, this->last_name);
	std::cout << "Insert Nick Name: ";
	getline(std::cin, this->nick_name);
	std::cout << "Insert Phone number Name: ";
	getline(std::cin, this->phone_number);
	std::cout << "Insert Darkest Secret: ";
	getline(std::cin, this->darkest_secret);
}

void	Contact::display_available_contacts(int index)
{
//	std::cout << std::setw(10);
	std::cout << index;
	std::cout << this->first_name;
	std::cout << this->last_name;
	std::cout << this->nick_name << std::endl;
}