#include "AMateria.hpp"

AMateria & AMateria::operator=(AMateria const &materia) {
	this->_type = materia.getType();
	return *this;
}

AMateria::AMateria(void) : _type("None"){
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria parameter constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria &mater) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = mater; // Overload "=" operator
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
}


std::string const & AMateria::getType(void) const {
	return this->_type;
}

void	AMateria::setType(std::string type) {
	this->_type = type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << "Do something to" << target.getName() << std::endl;
}
