#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# define MAX_CONTACT 8

# include "phonebook.h"
class	Phonebook {

	private:

	Contact _contact[MAX_CONTACT];
	int 	_max;

	void	display_columns(void);
	
	public:

	Phonebook(void);
	~Phonebook(void);

	void	add_contact(void);
	void	search_contact(void);
};

#endif
