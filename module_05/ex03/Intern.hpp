#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	Intern(void);
	~Intern(void);


	PresidentialPardon makePresidentialPardon(std::string target);
	RobotForm makeRobotRequest(std::string target);
	AsciiTree makeTreeForm(std::string target);
	Form	*makeForm(std::string name, std::string target);

	class NotExistingForm : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not existing form");
				}
		};
};

#endif
