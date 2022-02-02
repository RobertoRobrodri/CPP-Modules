#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("Hermes"), _grade(150) {
	std::cout << "Burro default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name), _grade(grade) {
	std::cout << "Burro parameter constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &bur) {
	this->_name = bur._name;
	this->_grade = bur._grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur) {
	std::cout << "Burro copy constructor called" << std::endl;
	*this = bur;
}

Bureaucrat::~Bureaucrat(void) {
		std::cout << "Burro destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

Bureaucrat::check_exceptions(void) const {
	if ((this->_grade + 1) > 150)
		throw GradeTooHighException();
	else if ((this->_grade - 1) < 1)
		throw GradeTooLowException();
}

int	Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::IncrementGrade(void) {
	check_exceptions();
	this->_grade -= 1;
}

void	Bureaucrat::DecrementGrade(void) {
	check_exceptions();
	this->_grade += 1;
}

std::ostream	& operator<<(std::ostream &os, const Bureaucrat &bur) {
	os << bur.getName() << " | " << bur.getGrade();
	return os;
}
