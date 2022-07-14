#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"

class PresidentialPardon : public Form
{
	private:

		std::string	_target;

	public:

		PresidentialPardon(void);
		PresidentialPardon(std::string target);
		~PresidentialPardon(void);
		virtual void execute(Bureaucrat const & executor) const;

		std::string	const &getTarget(void) const;
		PresidentialPardon & operator=(PresidentialPardon const &pp);
};

#endif
