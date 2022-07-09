#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(const Cat &Cat);
		virtual ~Cat(void);

		Cat & operator=(Cat const &cat);
		void	makeSound(void) const;

};

class WrongCat : public WrongAnimal {

	public:

		WrongCat(void);
		WrongCat(const WrongCat &Cat);
		virtual ~WrongCat(void);

		WrongCat & operator=(WrongCat const &cat);
		void	makeSound(void) const;

};

#endif
