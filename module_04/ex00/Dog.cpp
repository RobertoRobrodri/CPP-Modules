# include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &pug) : Animal("Dog") {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = pug;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Por favor no tiren cuetes" << std::endl;
}

Dog & Dog::operator=(Dog const &pug) {
	this->_type = pug._type;
	return *this;
}
