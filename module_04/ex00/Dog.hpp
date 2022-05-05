#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal {

	public:

		Dog(void);
		Dog(std::string type);
		Dog(const Dog &pug);
		virtual ~Dog(void);

		void	makeSound(void) const;

};
#endif
