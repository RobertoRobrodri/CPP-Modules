#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat(void);
		Cat(std::string type);
		Cat(const Cat &Cat);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;

};
#endif
