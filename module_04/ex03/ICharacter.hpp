#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
# include "AMateria.hpp"

class AMateria;
class ICharacter {

	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {

	private:

		AMateria*	_inventory[4];
		std::string	_name;

	public:

		Character(void);
		Character(std::string name);
		Character(const Character &pnj);
		virtual ~Character();

		std::string	const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

		Character & operator=(Character const &pnj);
};

#endif