#ifndef FORM_HPP
# define FORM_HPP
# include <stdio.h>
# include <stdbool.h>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

	private:

		std::string	const	_name;
		bool				_signed;
		int			const	_required_grade;

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};

		Form(void);
		Form(std::string const &name, int const &grade);
		Form(Form const &form);
		~Form(void);

		std::string getName(void) const;
		int	getGrade(void) const;
		bool	getSigned(void) const;

		void	check_exceptions(int gradation) const;
		void	beSigned(Bureaucrat const &bur);

		Form & operator=(Form const &form);
};
std::ostream	& operator<<(std::ostream &os, const Form &form);

#endif
