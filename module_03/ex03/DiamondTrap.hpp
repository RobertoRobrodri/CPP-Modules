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
		virtual ~Diamond_trap(void);

		void whoAmI(void);
		Diamond_trap &operator=(const Diamond_trap &other);
		std::string	getDiamondName(void);

	private:

		std::string _diamond_name;
};

#endif
