#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class	Phonebook {

	public:

//	Array de contactos
	std::string str[5];

	void	add_contact(void)
	{
		std::cout << "Input new contact information" << std::endl;
		std::cout << "first name, last name, nickname, phone number, darkest secret" << std::endl;
		for (int i = 0; i < 5; i++)
			std::cin >> str[i];
		for (int i = 0; i < 5; i++)
			std::cout << str[i] << std::endl;
	}
	private:

	const int	_max_contact = 8;
};
#endif
