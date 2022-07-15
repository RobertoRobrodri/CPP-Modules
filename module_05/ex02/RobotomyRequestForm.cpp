# include "RobotomyRequestForm.hpp"

RobotForm::RobotForm(void) : Form("Roboto", 0, 72, 45), _target("Bender") {
	std::cout << "Robot Form default constructor called" << std::endl;
}

RobotForm::RobotForm(std::string target) : Form("Roboto", 0, 72, 45), _target(target) {
	std::cout << "Robot Form parameter constructor called" << std::endl;
}

RobotForm::RobotForm(RobotForm const &rr) : Form() {
	*this = rr;
	std::cout << "Robot Form copy constructor called " << std::endl;
}

RobotForm::~RobotForm(void) {
	std::cout << "Robot Form destructor called" << std::endl;
}

std::string const & RobotForm::getTarget(void) const {
	return this->_target;
}

void	RobotForm::execute(Bureaucrat const & executor) const {
	this->can_exec(executor);
	this->is_signed();
	std::cout << " Drilling noises ";
	srand(time(NULL));
	int i = rand() % 2;
	std::cout << i << std::endl;
	if (i == 1)
		std::cout << this->getTarget() << " robotomized successfully " << std::endl;
	else
		std::cout << this->getTarget() << " robotomized failed " << std::endl;
}

RobotForm & RobotForm::operator=(RobotForm const &rr) {
	const_cast<std::string &>(this->_name) = rr.getName();
	this->_signed = rr.getSigned();
	const_cast<int &>(this->_execute_grade) = rr.getExecGrade();
	const_cast<int &>(this->_required_grade) = rr.getGrade();
	return *this;
}