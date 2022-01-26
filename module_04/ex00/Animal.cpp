# include "Animal.hpp"

Animal::Animal(void) : _type("Platipus") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Parameter Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
	return this->_type;
}

Animal & Animal::operator=(Animal const &animal) {
	this->_type = animal.getType();
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << this->getType() << std::endl;
}
