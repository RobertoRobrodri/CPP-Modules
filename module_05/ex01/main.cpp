#include "Bureaucrat.hpp"

int main() {

	try {

		Form form_1;
		std::cout << form_1 << std::endl;
		Bureaucrat hermes;
		std::cout << hermes << std::endl;
		hermes.signForm(form_1);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try {
		Form form_1("Divorce papers", 0, 1, 1);
		std::cout << form_1 << std::endl;
		Bureaucrat hermes;
		std::cout << hermes << std::endl;
		hermes.signForm(form_1);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try {
		Form form_1("Divorce papers", 0, 1, 1);
		std::cout << form_1 << std::endl;
		Bureaucrat hermes("Hermes", 2);
		hermes.IncrementGrade();
		std::cout << hermes << std::endl;
		hermes.signForm(form_1);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try {
		Form copy;
		Form form_1("Divorce papers", 0, 1, 1);
		std::cout << form_1 << std::endl;
		std::cout << copy << std::endl;
		copy = form_1;
		std::cout << copy << std::endl;
		Bureaucrat hermes;
		std::cout << hermes << std::endl;
		form_1.beSigned(hermes);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
}
