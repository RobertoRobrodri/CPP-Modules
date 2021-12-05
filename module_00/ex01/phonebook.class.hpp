#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# define MAX_CONTACT 8

# include "phonebook.h"
class	Phonebook {

	private:

	Contact _contact[MAX_CONTACT];
	int _max = 0;

	public:

	void	add_contact(std::string str);
	void	search_contact(void);
	void	display_columns(void);
};

#endif
