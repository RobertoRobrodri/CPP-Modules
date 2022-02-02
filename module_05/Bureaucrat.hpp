#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>
# include <string>
# include <exception>

class Bureaucrat
{
	private:

		std::string	_name;
		int			_grade;

		void	GradeTooHighException(void) const;
		void	GradeTooLowException(void) const;

	public:

		class GradeTooHighException : public std::exception
		{
			public:

		};

		class GradeTooHighException : public std::exception
		{
			public:

		};

		Bureaucrat(void);
		Bureaucrat(std::string const &name, int const &grade);
		Bureaucrat(Bureaucrat const &bur);
		~Bureaucrat(void);

		std::string getName(void) const;
		int	getGrade(void) const;

		void	IncrementGrade(void);
		void	DecrementGrade(void);

		void	check_exceptions(void) const;

		Bureaucrat & operator=(Bureaucrat const &bur);
};
std::ostream	& operator<<(std::ostream &os, const Bureaucrat &bur);

# endif
