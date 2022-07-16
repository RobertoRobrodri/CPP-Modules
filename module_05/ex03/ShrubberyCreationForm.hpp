#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	private:

		std::string	_target;

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & tree);
		~ShrubberyCreationForm(void);

		virtual void execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &tree);
};

#endif
