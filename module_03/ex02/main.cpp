#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	Frag_trap paco("Paco");

	paco.takeDamage(0);
	paco.attack("Jhonny");
	paco.takeDamage(5);
	paco.beRepaired(4);
	return (0);
}