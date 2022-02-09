#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat paco("Paco", 150);

		std::cout << paco << std::endl;
		paco.DecrementGrade();
		std::cout << paco << std::endl;
		paco.IncrementGrade();

		std::cout << paco << std::endl;

		Bureaucrat pepe("Pepe", 100);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
