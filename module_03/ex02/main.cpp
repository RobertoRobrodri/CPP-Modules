#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	Scav_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);

	Clap_trap joseto("joseto");
	joseto.takeDamage(0);
	joseto.attack("Jhonny");
	joseto.takeDamage(5);
	joseto.beRepaired(4);
	Frag_trap pepo("Pepo");

	pepo.takeDamage(0);
	pepo.attack("Jhonny");
	pepo.takeDamage(5);
	pepo.beRepaired(4);
	return (0);
}
