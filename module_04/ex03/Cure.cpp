#include "Cure.hpp"

Cure::Cure(void) {
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const & type) {
	std::cout << "Cure parameter constructor called" << std::endl;
	this->_type = type;
}

Cure::Cure(const Cure &mater) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = mater;
}

Cure::~Cure(void) {
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target) {
	std::cout << "Heals" << target.getName() << "'s wounds" << std::endl;
}

AMateria* Cure::clone() const {
	Cure *tmp;
	tmp = new Cure();
	return tmp;
}
