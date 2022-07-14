#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat paco("Paco", 150);

		std::cout << paco << std::endl;
		paco.IncrementGrade();
		std::cout << paco << std::endl;
		paco.DecrementGrade();
		std::cout << paco << std::endl;

		Bureaucrat pepe("Pepe", 100);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat _default;
		Bureaucrat pepe("Pepe", 200);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	yusepe("Yusepe", 1);
		yusepe.IncrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	jacinto("Jacinto", 150);
		jacinto.DecrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
