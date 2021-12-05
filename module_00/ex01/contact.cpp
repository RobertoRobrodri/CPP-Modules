#include "phonebook.h"

void Contact::fill_names(std::string str)
{
	std::cout << "Insert First Name: ";
	getline(std::cin, this->info[0]);
	std::cout << "Insert Last Name: ";
	getline(std::cin, this->info[1]);
	std::cout << "Insert Nick Name: ";
	getline(std::cin, this->info[2]);
	std::cout << "Insert Phone number Name: ";
	getline(std::cin, this->info[3]);
	std::cout << "Insert Darkest Secret: ";
	getline(std::cin, this->info[4]);
}

void	Contact::display_available_contacts(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < 3; i++) {
		
		std::cout << "|";
		if (this->info[i].length() > 10) {
			std::cout << this->info[i].substr(0, 9) << '.';
		}
		else {
			std::cout << std::setw(10) << this->info[i];
		}
	}
	std::cout << "|" << std::endl;
}