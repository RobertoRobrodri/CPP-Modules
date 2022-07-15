#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form {

	private:

		std::string	const	_name;
		bool				_signed;
		int			const	_required_grade;
		int			const	_execute_grade;

		void	check_exceptions(int gradation) const;


	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form Grade too low");
				}
		};

		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Already signed");
				}
		};

		Form(void);
		Form(std::string const &name, bool const &is_signed, int const &grade, int const &exec);
		Form(Form const &f);
		~Form(void);

		std::string const &getName(void) const;
		int		const &getGrade(void) const;
		int		const &getExecGrade(void) const;
		bool	const &getSigned(void) const;

		void	beSigned(Bureaucrat const &bur);
		Form & operator=(Form const &f);

};
std::ostream	& operator<<(std::ostream &os, const Form &form);

#endif
