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

		class UnsignedFormException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Cannot execute unsigned form");
				}
		};

		Form(void);
		Form(std::string const &name, bool const &is_signed, int const &grade, int const &exec);
		Form(Form const &f);
		~Form(void);

		std::string getName(void) const;
		int	getGrade(void) const;
		int	getExecGrade(void) const;
		bool	getSigned(void) const;

		void	check_exceptions(int gradation) const;
		void	beSigned(Bureaucrat const &bur);

		virtual void execute(Bureaucrat const & executor) const = 0;
		void	can_sign(Bureaucrat const &bur) const;
		void	can_exec(Bureaucrat const &bur) const;
		void	is_signed(void) const;
};
std::ostream	& operator<<(std::ostream &os, const Form &form);

#endif
