#include "Amateria.hpp"

Amateria::Amateria(void) {
	std::cout << "Amateria default constructor called" << std::endl;
	this->_type = "None";
}

Amateria::AMateria(std::string const & type) {
	std::cout << "Amateria parameter constructor called" << std::endl;
	this->_type = type;
}

Amateria::Amateria(const Amateria &mater) {
	std::cout << "Amateria copy constructor called" << std::endl;
	*this = mater; // Overload "=" operator
}

Amateria::virtual ~Amateria(void) {
	std::cout << "Amateria destructor called" << std::endl;
}

Amateria*	Amateria::clone() const {
	Amateria *tmp;
	*tmp = this;
	return tmp;
}

void	Amateria::use(ICharacter& target) {
	std::cout << "Do something to" << target << std::endl;
}
