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
	//	Ice(std::string const &type);
		Ice(Ice const &ice);
		virtual ~Ice(void);

		AMateria* 	clone() const;
		void		use(ICharacter& target);
};

class Cure : public AMateria {

	public:

		Cure(void);
	//	Cure(std::string const &type);
		Cure(Cure const &potion);
		virtual ~Cure(void);

		AMateria* 	clone() const;
		void		use(ICharacter& target);
};

#endif
