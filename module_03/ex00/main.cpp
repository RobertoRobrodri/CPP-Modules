#include "ClapTrap.hpp"

int main(void)
{
	Clap_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);

	Clap_trap pepe;
	pepe.takeDamage(0);
	pepe.attack("Papo");
	pepe.takeDamage(5);
	pepe.beRepaired(4);

	return (0);
}
