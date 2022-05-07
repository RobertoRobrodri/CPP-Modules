# include "RobotomyRequestForm.hpp"

RobotForm::RobotForm(std::string target) : Form("Roboto", 0, 72, 45), _target(target) {
	std::cout << "Robot Form default constructor called" << std::endl;
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