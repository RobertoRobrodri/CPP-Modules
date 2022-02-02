#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"

class Cure : public Amateria {

	private:

	public:

	 	Cure(void);
	 	Cure(std::string const & type);
	 	Cure(const Cure &mater);
		virtual  Cure(void);

		virtual void use(ICharacter& target)
		AMateria* Cure::clone() const;
};

#endif
