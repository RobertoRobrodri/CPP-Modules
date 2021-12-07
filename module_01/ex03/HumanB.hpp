#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB {

	private:

		Weapon*		_weapon;
		std::string	_name;

	public:

	HumanB(std::string name);
	~HumanB(void);

	void		setWeapon(Weapon &weapon);
	void		attack(void);
	std::string	get_name(void);
};

#endif
