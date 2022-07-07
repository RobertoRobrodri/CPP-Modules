#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	/* Copy constructor works*/
	Clap_trap yusepe(joseto);
	std::cout << yusepe.get_hp() << std::endl;
	std::cout << yusepe.get_name() << std::endl;

	yusepe.takeDamage(100);
	yusepe.beRepaired(-100);
	paco.guardGate();

	Scav_trap guille(paco);
	std::cout << guille.get_name() << std::endl;

	Frag_trap leroy("Leroy");
	leroy.takeDamage(0);

	Diamond_trap aberration("ABERRATION");
	aberration.guardGate();
	aberration.highFivesGuys();
	aberration.whoAmI();
	return (0);
}
