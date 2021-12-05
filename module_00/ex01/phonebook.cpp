#include "phonebook.h"

void	Phonebook::add_contact(std::string str)
{
	if (_max == MAX_CONTACT)
	{
		std::cout << "Oldest contact will be Overwritten" << std::endl;
		for (int i = 0; i < MAX_CONTACT - 2; i++)
			this->_contact[i] = this->_contact[i + 1];
		this->_contact[this->_max - 1].fill_names(str);
	}
	else
	{
		this->_contact[this->_max].fill_names(str);
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

	index = 0;
	if (!this->_max)
		std::cout << "No contacts added" << std::endl;
	else
	{
		this->display_columns();
		for (int i = this->_max - 1; i >= 0; i--)
			this->_contact[i].display_available_contacts(i);
		std::cout << "Input desired index: ";
		std::cin >> index;
		if ((index < MAX_CONTACT && index >= 0) && index < _max)
			this->_contact[index].display_info();
		else
			std::cout << "Invalid input" << std::endl;
	}
}