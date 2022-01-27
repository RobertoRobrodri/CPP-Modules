# include "Dog.hpp"

Dog & Dog::operator=(Dog const &pug) {
	this->_type = pug.getType();
	this->_brain = new Brain();
	return *this;
}

Dog::Dog(void) {
	this->_type = "Dog";
	this->_brain = new Brain();
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
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}
