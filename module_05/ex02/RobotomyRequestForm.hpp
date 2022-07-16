#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Bureaucrat.hpp"
# include <stdlib.h>

class RobotomyRequestForm : public Form
{
	private:

		std::string	_target;

	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &rr);
		~RobotomyRequestForm(void);
		virtual void execute(Bureaucrat const & executor) const;

		std::string const &getTarget(void) const;
		RobotomyRequestForm & operator=(RobotomyRequestForm const &rr);

};

#endif
