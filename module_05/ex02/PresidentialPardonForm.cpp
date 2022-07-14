#include "PresidentialPardonForm.hpp"

PresidentialPardon::PresidentialPardon(void) : Form("Presidential Pardon", 0, 25, 5), _target("M Punto Rajoy") {
	std::cout << "Presidential Pardon default constructor called" << std::endl;
}

PresidentialPardon::PresidentialPardon(std::string target) : Form("Presidential Pardon", 0, 25, 5), _target(target) {
	std::cout << "Presidential Pardon Parameter constructor called" << std::endl;
}

PresidentialPardon::~PresidentialPardon(void) {
	std::cout << "Presidential Pardon destructor called" << std::endl;
}

std::string	const & PresidentialPardon::getTarget(void) const {
	return this->_target;
}

void PresidentialPardon::execute(Bureaucrat const & executor) const {
	this->can_exec(executor);
	this->is_signed();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
