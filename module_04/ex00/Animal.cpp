# include "Animal.hpp"

Animal::Animal(void) : _type("Platipus") {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Parameter Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal Copy constructor called" << std::endl;
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
	std::cout << "Generic animal sound" << std::endl;
}

// WRONG ANIMAL

WrongAnimal::WrongAnimal(void) : _type("WrongPlatipus") {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "Parameter WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	std::cout << "Copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &animal) {
	this->_type = animal.getType();
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Generic Wronganimal sound" << std::endl;
}
