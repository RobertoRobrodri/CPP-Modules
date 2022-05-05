#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	private:

		Brain*	_brain;

	public:

		Dog(void);
		Dog(std::string type);
		Dog(const Dog &pug);
		virtual ~Dog(void);

		Dog & operator=(Dog const &pug);

		void	makeSound(void) const;

};
#endif
