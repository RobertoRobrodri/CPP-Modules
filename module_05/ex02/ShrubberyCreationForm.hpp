#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"

class AsciiTree : public Form
{
	private:

		std::string	_target;

	public:
	
		AsciiTree(std::string target);
		~AsciiTree(void);

		virtual void execute(Bureaucrat const & executor) const;

		std::string	getTarget(void) const;
};

#endif