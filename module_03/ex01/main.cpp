#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	Scav_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);
	return (0);
}