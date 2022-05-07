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

Form *Intern::makePresidentialPardon(std::string target) {
	Form *PP = new PresidentialPardon(target);
	return PP;
}

Form *Intern::makeRobotRequest(std::string target) {
	Form *Roboto = new RobotForm(target);
	return Roboto;
}

Form *Intern::makeTreeForm(std::string target) {
	Form *Tree = new AsciiTree(target);
	return Tree;
}

Form	*Intern::makeForm(std::string name, std::string target) {
	Form *(Intern::*func[])(std::string) = {&Intern::makePresidentialPardon,
		&Intern::makeRobotRequest, &Intern::makeTreeForm};
	std::string	form_types[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (name.compare(form_types[i]) == 0)
		{
			std::cout << "Intern creates " << form_types[i] << std::endl;
			return (this->*(func[i]))(target);
		}
	throw Intern::NotExistingForm();
}
