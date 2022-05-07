# include "Form.hpp"

// Constructor
Form::Form(void) : _name("Formulary 0.1"), _signed(0), _required_grade(150), _execute_grade(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const &name, bool const &is_signed, int const &grade, int const &exec) : _name(name), _signed(is_signed), _required_grade(grade) , _execute_grade(exec) {
	this->check_exceptions(grade);
	this->check_exceptions(exec);
	std::cout << "Form parameter constructor called" << std::endl;
}

Form::Form(Form const &f) : _name(f._name), _signed(f._signed), _required_grade(f._required_grade), _execute_grade(f._execute_grade) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void){
	std::cout << "Form destructor called" << std::endl;
}

//Getters
std::string	const & Form::getName(void) const {
	return this->_name;
}

int	const & Form::getGrade(void) const {
	return this->_required_grade;
}

bool	const & Form::getSigned(void) const {
	return  this->_signed;
}

int	const & Form::getExecGrade(void) const {
	return this->_execute_grade;
}

std::ostream	& operator<<(std::ostream &os, const Form &form) {
	os << form.getName() << " | " << form.getGrade() << " | " << form.getSigned() << " | " << form.getExecGrade();
	return os;
}

void	Form::beSigned(Bureaucrat const &bur) {
	if (this->_signed == 1)
	{
		std::cout << "Already signed" << std::endl;
		return ;
	}
	this->can_sign(bur);
	this->_signed = 1;
}

void	Form::check_exceptions(int gradation) const {
	if (gradation > 150)
		throw Form::GradeTooLowException();
	else if (gradation < 1)
		throw Form::GradeTooHighException();
}

void	Form::can_sign(Bureaucrat const &bur) const {
	if (bur.getGrade() > this->getGrade())
		throw Form::GradeTooLowException();
}

void	Form::can_exec(Bureaucrat const &bur) const {
	if (bur.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
}

void	Form::is_signed(void) const {
	if (this->getSigned() == 0)
		throw Form::UnsignedFormException();
}