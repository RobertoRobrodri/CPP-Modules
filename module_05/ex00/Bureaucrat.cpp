#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("Hermes"), _grade(150) {
	std::cout << "Burro default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade){
	this->check_exceptions(grade);
	this->_name = name;
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

std::string const &Bureaucrat::getName(void) const {
	return this->_name;
}

int	const &Bureaucrat::getGrade(void) const {
	return this->_grade;
}

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

std::ostream	& operator<<(std::ostream &os, const Bureaucrat &bur) {
	os << bur.getName() << " | " << bur.getGrade();
	return os;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &bur) {
	this->_name = bur._name;
	this->_grade = bur._grade;
	return *this;
}