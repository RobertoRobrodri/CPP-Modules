#include "Zombie.hpp"

int main(void)
{
	Zombie *paco_horde;
	paco_horde = zombieHorde(5, "Paco");
	delete[] paco_horde;
	return (0);
}
