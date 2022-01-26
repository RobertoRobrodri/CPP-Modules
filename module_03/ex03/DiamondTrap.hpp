#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class Diamond_trap : public Scav_trap, public Frag_trap {
	public:

		Diamond_trap(void);
		Diamond_trap(std::string name);
		Diamond_trap(const Diamond_trap &diamond);
		~Diamond_trap(void);

		void whoAmI(void);
};

#endif
