#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Bureaucrat.hpp"

class RobotForm : public Form
{
	private:

		std::string	_target;

	public:

		RobotForm(std::string target);
		~RobotForm(void);

		std::string getTarget(void) const;
		virtual void execute(Bureaucrat const & executor) const;

};

#endif