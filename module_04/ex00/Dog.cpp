# include "Dog.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(std::string type) {
	this->_type = type;
	std::cout << "Parameter Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &pug) {
	std::cout << "Copy constructor called" << std::endl;
	*this = pug;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}
