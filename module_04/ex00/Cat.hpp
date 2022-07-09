#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(std::string type);
		Cat(const Cat &Cat);
		virtual ~Cat(void);

		Cat & operator=(Cat const &cat);
		void	makeSound(void) const;

};

class WrongCat : public WrongAnimal {

	public:

		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &Cat);
		virtual ~WrongCat(void);

		WrongCat & operator=(WrongCat const &cat);
		void	makeSound(void) const;

};

#endif
