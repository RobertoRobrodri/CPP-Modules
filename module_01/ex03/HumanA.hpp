#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA {

	private:

		Weapon&		_weapon;
		std::string	_name;

	public:

	HumanA(std::string name, Weapon &weapon_type);
	~HumanA(void);

	void		attack(void) const;
	std::string	get_name(void) const;
};

#endif
