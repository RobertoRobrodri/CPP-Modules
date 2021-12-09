#include "phonebook.h"
#include <string>

int main(void)
{
	std::string str;
	Phonebook	phonebook;

	while (1)
	{
		std::cout << "USER : ";
		getline(std::cin, str);
		if (!str.compare("EXIT"))
			break ;
		else if (!str.compare("ADD"))
			phonebook.add_contact();
		else if (!str.compare("SEARCH"))
			phonebook.search_contact();
		str.clear();
	}
	return (0);
}
