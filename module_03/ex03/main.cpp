#include "DiamondTrap.hpp"

int main(void)
{
	Diamond_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);
	return (0);
}
