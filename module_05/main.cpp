#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat paco("Paco", 150);

	std::cout << paco << std::endl;
	paco.IncrementGrade();
	std::cout << paco << std::endl;
	paco.DecrementGrade();
	std::cout << paco << std::endl;
}
