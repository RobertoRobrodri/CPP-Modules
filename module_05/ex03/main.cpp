#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern jose;
		jose.makeForm("No existe", "paco");
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		Intern jose;
		jose.makeForm("robotomy request", "paco");
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}