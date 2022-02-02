#include "Ice.hpp"

Ice::Ice(void) {
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string const & type) {
	std::cout << "Ice parameter constructor called" << std::endl;
	this->_type = type;
}

Ice::Ice(const Ice &mater) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = mater;
}

Ice::~Ice(void) {
	std::cout << "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter& target) {
	std::cout << "Shoots ice at" << target.getName() << std::endl;
}

AMateria* Ice::clone() const {
	Ice *tmp;
	tmp = new Ice();
	return tmp;
}
