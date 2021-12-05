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
	std::cout << "|";
	std::cout << std::right << std::setw(6);
	std::cout << index;
	std::cout << std::right << std::setw(5);
	std::cout << "|";
	for (int i = 0; i < 3; i++) {
		if (this->info[i].length() >= 10) {
			std::cout << std::right << std::setw(6);
			std::cout << this->info[i].substr(0, 9) << '.';
		}
		else {
			std::cout << std::right << std::setw(10 - info[i].length());
			std::cout << this->info[i];
			std::cout << std::right << std::setw(this->info[i].length() + 1);
		}
			std::cout << "|";
	}
	std::cout << std::endl;
}