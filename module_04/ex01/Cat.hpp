#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:

		Brain* _brain;

	public:

		Cat(void);
		Cat(const Cat &Cat);
		virtual ~Cat(void);

		Cat & operator=(Cat const &nyan_cat);

		void	makeSound(void) const;

};
#endif
