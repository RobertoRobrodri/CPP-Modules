#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice : public Amateria {

	private:

	public:

		Ice(void);
		Ice(std::string const & type);
		Ice(const Ice &mater);
		virtual ~Ice(void);

		void use(ICharacter& target)
		AMateria* clone() const;
};

#endif
