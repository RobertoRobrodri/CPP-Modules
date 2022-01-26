#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <ostream>
# include <string>

class Animal {

	private:

		std::string	_type;

	public:

		Animal(void);
		Animal(std::string type);
		Animal(const Animal &animal);
		~Animal(void);

};
void	makeSound(void);
#endif
