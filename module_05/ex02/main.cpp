#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		PresidentialPardon pp;
		AsciiTree tree;
		RobotForm robot;

		std::cout << pp << " "<< pp.getTarget() <<std::endl;
		std::cout << tree << " "<< tree.getTarget() << std::endl;
		std::cout << robot << " " <<robot.getTarget() << std::endl;
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		PresidentialPardon pp;
		Bureaucrat hermes;

		pp.execute(hermes);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		PresidentialPardon pp;
		Bureaucrat perro_xanxe("PerroXanxe", 1);
		pp.execute(perro_xanxe);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		PresidentialPardon pp;
		Bureaucrat perro_xanxe("PerroXanxe", 1);
		perro_xanxe.signForm(pp);
		pp.execute(perro_xanxe);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		PresidentialPardon pp;
		Bureaucrat floren("Floren", 26);
		Bureaucrat perro_xanxe("PerroXanxe", 1);
		floren.signForm(pp);
		pp.execute(perro_xanxe);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
		std::cout << "---------------------------------------" << std::endl;
	try {
		RobotForm pp;
		Bureaucrat perro_xanxe("PerroXanxe", 1);
		perro_xanxe.signForm(pp);
		pp.execute(perro_xanxe);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	try {
		AsciiTree pp("Home");
		Bureaucrat perro_xanxe("PerroXanxe", 1);
		perro_xanxe.signForm(pp);
		pp.execute(perro_xanxe);
	}
	catch (const std::exception &e ) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}