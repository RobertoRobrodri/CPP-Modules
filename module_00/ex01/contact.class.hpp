#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "phonebook.h"

class Contact {

	private:

	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	public:

	void	fill_names(std::string str);
	void	display_available_contacts(int index);
};
#endif