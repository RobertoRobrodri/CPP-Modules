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
		virtual ~Animal(void);

		Animal & operator=(Animal const &animal);

		std::string getType(void) const;

		virtual void	makeSound(void) const;
};

class WrongAnimal {
	protected:

		std::string	_type;

	public:

		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &animal);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const &animal);

		std::string getType(void) const;

		void	makeSound(void) const;
};

#endif
