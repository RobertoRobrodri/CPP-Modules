#include "phonebook.h"
#include <string>

int main(void)
{
	std::string str;
	Phonebook	phonebook;

	std::cout << "USER : ";
	while (getline(std::cin, str))
	{
		if (!str.compare("EXIT"))
			break ;
		else if (!str.compare("ADD"))
			phonebook.add_contact();
		else if (!str.compare("SEARCH"))
			phonebook.search_contact();
		str.clear();
		std::cout << "USER : ";
	}
	return (0);
}
