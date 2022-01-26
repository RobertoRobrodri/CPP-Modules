#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <ostream>
# include <string>

class Animal {

	protected:

		std::string	_type;

	public:

		Animal(void);
		Animal(std::string type);
		Animal(const Animal &animal);
		~Animal(void);

		//Animal & operator=(Animal const &animal);

		std::string getType(void) const;

		void	makeSound(void);
};
#endif
