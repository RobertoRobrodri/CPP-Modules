#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Bureaucrat.hpp"
# include <stdlib.h>

class RobotForm : public Form
{
	private:

		std::string	_target;

	public:

		RobotForm(void);
		RobotForm(std::string target);
		RobotForm(RobotForm const &rr);
		~RobotForm(void);
		virtual void execute(Bureaucrat const & executor) const;

		std::string const &getTarget(void) const;
		RobotForm & operator=(RobotForm const &rr);

};

#endif
