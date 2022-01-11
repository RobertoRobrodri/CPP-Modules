#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public Clap_trap
{
	private:
		/* data */
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scav);
		~ScavTrap(void);

	};


#endif