#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <ostream>
# include <string>
# include <stdexcept>
# include <exception>

class Bureaucrat
{
	private:

		std::string	_name;
		int			_grade;

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

		std::string getName(void) const;
		int	getGrade(void) const;

		void	IncrementGrade(void);
		void	DecrementGrade(void);

		void	check_exceptions(int grade) const;

		Bureaucrat & operator=(Bureaucrat const &bur);
};
std::ostream	& operator<<(std::ostream &os, const Bureaucrat &bur);

# endif
