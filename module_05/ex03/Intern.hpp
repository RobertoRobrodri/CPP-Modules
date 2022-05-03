#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	
		Intern(void);
		~Intern(void);


		Form 	*makePresidentialPardon(std::string target);
		Form	*makeRobotRequest(std::string target);
		Form	*makeTreeForm(std::string target);
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
