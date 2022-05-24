#include "Base.hpp"

Base::~Base ( void ) {}

Base * generate(void) {

	int		selector;
	Base 	*random_derived;

	srand((unsigned) time (0));
	selector = rand() % 3;
	if (selector == 0)
	{
		std::cout << "A Class created" << std::endl;
		return random_derived = new A;
	}
	else if (selector == 1)
	{
		std::cout << "B Class created" << std::endl;
		return random_derived = new B;
	}
	else
	{
		std::cout << "C Class created" << std::endl;
		return random_derived = new C;
	}
	return 0;
}

void identify(Base* p) {
	try
	{
		if (dynamic_cast<A*>(p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(p))
			std::cout << "C" << std::endl;
		else
			throw std::bad_cast();
	}
	catch (std::bad_cast &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void identify(Base& p) {
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast& bc) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast& bc) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast& bc) {}
}
