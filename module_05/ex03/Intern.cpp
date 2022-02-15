# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern(void) {
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called" << std::endl;
}

PresidentialPardon Intern::makePresidentialPardon(std::string target) {
	PresidentialPardon PP(target);
	return PP;
}

RobotForm Intern::makeRobotRequest(std::string target) {
	RobotForm Roboto(target);
	return Roboto;
}

AsciiTree Intern::makeTreeForm(std::string target) {
	AsciiTree Tree(target);
	return Tree;
}

Form	*Intern::makeForm(std::string name, std::string target) {
	Form (Intern::*func[])() = {&Intern::makePresidentialPardon, &Intern::makeRobotRequest, &Intern::makeTreeForm};
	std::string	form_types[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (name.compare(form_types[i]) == 0)
			return func[i](target);
	throw Intern::NotExistingForm();
}
