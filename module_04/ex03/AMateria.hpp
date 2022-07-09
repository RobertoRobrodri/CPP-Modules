#ifndef AMATERIA_HPP
#define AMATERIA_HPP
# include <iostream>
# include <ostream>
# include <string>

class ICharacter;
class AMateria {

	protected:

		std::string	 _type;

	public:

		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &mater);
		virtual ~AMateria(void);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		AMateria & operator=(AMateria const &mater);
};

class Ice : public AMateria {

	public:

		Ice(void);
		Ice(Ice const &ice);
		virtual ~Ice(void);

		AMateria* 	clone() const;
		void		use(ICharacter& target);

		Ice & operator=(Ice const &mater);
};

class Cure : public AMateria {

	public:

		Cure(void);
		Cure(Cure const &potion);
		virtual ~Cure(void);

		AMateria* 	clone() const;
		void		use(ICharacter& target);

		Cure & operator=(Cure const &mater);
};

#endif
