#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {

	public:

		Dog(void);
		Dog(const Dog &pug);
		virtual ~Dog(void);

		Dog & operator=(Dog const &pug);
		void	makeSound(void) const;

};
#endif
