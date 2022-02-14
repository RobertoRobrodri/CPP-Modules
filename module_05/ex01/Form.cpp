# include "Form.hpp"

// Constructor
Form::Form(void) {
	std::cout << "Form default constructor called" << std::endl;
	this->_name = "Formulary 0.1"
	this->_signed = 0;
	this->_required_grade = 150;
}

Form::Form(std::string const &name, bool const &is_signed, int const &grade) {
	this->check_exceptions(grade);
	std::cout << "Form parameter constructor called" << std::endl;
	this->_name = name;
	this->_signed = is_signed;
	this->_required_grade = grade;
}

Form::Form(Bureaucrat const &form) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = form;
}

Form::~Form(void){
	std::cout << "Form destructor called" << std::endl;
}


//Getters
std::string	Form::getName(void) const {
	return this->_name;
}

int	Form::getGrade(void) const {
	return this->_required_grade;
}

bool	Form::getSigned(void) const {
	return  this->_signed;
}

//Operators
Form & operator=(Form const &form) {
	this->_name = form._name;
	this->_required_grade = form._required_grade;
	this->_signed = form._signed;
}

std::ostream	& operator<<(std::ostream &os, const Form &form) {
	os << form.getName() << " | " << form.getGrade() << " | " << form.getSigned();
	return os;
}

void	beSigned(Bureaucrat const &bur) {
	if (this->getSigned == 1)
	{
		std::cout << "Already signed" << std::endl;
		return ;
	}
	else if (bur->getGrade() > this->getGrade())
	{
		bur->signForm(this);
		throw Form::GradeTooLowException();
	}
	this->_signed = 1;
	bur->signForm(this);
}

void	Form::check_exceptions(int gradation) const {
	if (gradation > 150)
		throw Form::GradeTooLowException();
	else if (gradation < 1)
		throw Form::GradeTooHighException();
}
