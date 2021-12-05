#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "phonebook.h"

class Contact {

	private:

	std::string info[5];

	public:

	void	fill_names(std::string str);
	void	display_available_contacts(int index);
};
#endif