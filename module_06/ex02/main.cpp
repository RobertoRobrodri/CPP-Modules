#include "Base.hpp"

int main (void)
{
	Base *rand_class;
	rand_class = generate();
	identify(rand_class);
	identify(*rand_class);
	delete rand_class;
	return 0;
}