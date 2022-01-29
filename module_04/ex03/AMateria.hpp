#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <ostream>
# include <string>
# include "ICharacter_hpp"

class Amateria {

	protected:

		std::string _type;

	public:

		Amateria(void);
		Amateria(std::string const & type);
		Amateria(const Amateria &mater);
		virtual ~Amateria(void);

		std::string	getType(void);
		void	setType(std::string type);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target)
}

#endif
