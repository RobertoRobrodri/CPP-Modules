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

Form::Form(Form const &f) : _required_grade(f.getGrade()), _execute_grade(f.getExecGrade()) {
	std::cout << "Form copy constructor called" << std::endl;
	*this = f;
}

Form::~Form(void){
	std::cout << "Form destructor called" << std::endl;
}

//Getters
std::string	const &Form::getName(void) const {
	return this->_name;
}

int	const &Form::getGrade(void) const {
	return this->_required_grade;
}

bool const &Form::getSigned(void) const {
	return  this->_signed;
}

int	const &Form::getExecGrade(void) const {
	return this->_execute_grade;
}

//Overloading
std::ostream	& operator<<(std::ostream &os, const Form &form) {
	os << form.getName() << " | " << form.getGrade() << " | " << form.getSigned() << " | " << form.getExecGrade();
	return os;
}

Form & Form::operator=(Form const &f) {
	const_cast<std::string &>(this->_name) = f.getName();
	this->_signed = f.getSigned();
	const_cast<int &>(this->_execute_grade) = f.getExecGrade();
	const_cast<int &>(this->_required_grade) = f.getGrade();
	return *this;
}

//Other functions
void	Form::beSigned(Bureaucrat const &bur) {
	if (this->_signed == 1)
		throw Form::AlreadySignedException();
	else if (bur.getGrade() > this->getGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = 1;
}

void	Form::check_exceptions(int gradation) const {
	if (gradation > 150)
		throw Form::GradeTooLowException();
	else if (gradation < 1)
		throw Form::GradeTooHighException();
}
