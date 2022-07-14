# include "Bureaucrat.hpp"

//DEFAULT STUFF
Bureaucrat::Bureaucrat(void) : _name("Hermes"), _grade(150) {
	std::cout << "Burro default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade){
	this->check_exceptions(grade);
	const_cast<std::string &> (this->_name) = name;
	this->_grade = grade;
	std::cout << "Burro parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur) {
	std::cout << "Burro copy constructor called" << std::endl;
	*this = bur;
}

Bureaucrat::~Bureaucrat(void) {
		std::cout << "Burro destructor called" << std::endl;
}

//GETTERS
std::string const &Bureaucrat::getName(void) const {
	return this->_name;
}

int	const &Bureaucrat::getGrade(void) const {
	return this->_grade;
}

//OTHER FUNCTIONS
void	Bureaucrat::check_exceptions(int gradation) const {
	if (gradation > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (gradation < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::IncrementGrade(void) {
	this->check_exceptions(this->_grade - 1);
	this->_grade -= 1;
}

void	Bureaucrat::DecrementGrade(void) {
	this->check_exceptions(this->_grade + 1);
	this->_grade += 1;
}

void	Bureaucrat::signForm(Form &form) const {
	if (form.getSigned() == 1)
		std::cout << "Already signed" << std::endl;
	else if (this->getGrade() <= form.getGrade())
	{
		form.beSigned(*this);
		std::cout << this->getName() << "  signs " << form.getName() << std::endl;
	}
	else
		std::cout << this->getName() << "  cannot sign " << form.getName() << std::endl;
}

//OVERLOADING
std::ostream	& operator<<(std::ostream &os, const Bureaucrat &bur) {
	os << bur.getName() << " | " << bur.getGrade();
	return os;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &bur) {
	const_cast<std::string &> (this->_name) = bur.getName();
	this->_grade = bur.getGrade();
	return *this;
}

