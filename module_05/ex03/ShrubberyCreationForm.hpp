#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Bureaucrat.hpp"

class AsciiTree : public Form
{
	private:

		std::string	_target;

	public:

		AsciiTree(void);
		AsciiTree(std::string target);
		AsciiTree(AsciiTree const & tree);
		~AsciiTree(void);

		virtual void execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;
		AsciiTree & operator=(AsciiTree const &tree);
};

#endif
