#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>
# include <string>
# include <stdexcept>
# include <exception>
# include <stdio.h>
# include <stdbool.h>
# include "Form.hpp"

class Form;
class Bureaucrat
{
	private:

		std::string	const	_name;
		int					_grade;

		void	check_exceptions(int grade) const;

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

		Bureaucrat(void);
		Bureaucrat(std::string const &name, int const &grade);
		Bureaucrat(Bureaucrat const &bur);
		~Bureaucrat(void);

		std::string const & getName(void) const;
		int	const & getGrade(void) const;

		void	IncrementGrade(void);
		void	DecrementGrade(void);

		void	signForm(Form &form) const;
		void	executeForm(Form const & form) const;

		Bureaucrat & operator=(Bureaucrat const &bur);
};
std::ostream	& operator<<(std::ostream &os, const Bureaucrat &bur);

# endif
