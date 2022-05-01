#include "phonebook.h"

Contact::Contact(void) {
	std::cout << "Contact Constructor called" << std::endl;
	for (int i = 0; i < 5; i++) {
		this->info[i] = "";
	}
}

Contact::~Contact(void) {
	std::cout << "Contact Destructor called" << std::endl;
}

void Contact::fill_names(void)
{
	std::cout << "Insert First Name: ";
	getline(std::cin, this->info[0]);
	std::cout << "Insert Last Name: ";
	getline(std::cin, this->info[1]);
	std::cout << "Insert Nick Name: ";
	getline(std::cin, this->info[2]);
	std::cout << "Insert Phone number: ";
	getline(std::cin, this->info[3]);
	while (info[3].find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Not a number" << std::endl;
		info[3].clear();
		std::cout << "Insert a valid Phone number: ";
		getline(std::cin, this->info[3]);
	}
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

void	Contact::display_info(void)
{
	for (int i = 0; i < 5; i++)
		std::cout << this->info[i] << std::endl;
}
