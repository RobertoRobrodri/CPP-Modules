# include "Dog.hpp"

Dog & Dog::operator=(Dog const &pug) {
	this->_type = pug.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->ideas[i] = pug._brain->ideas[i];
	}
	return *this;
}

Dog::Dog(void) : Animal("Dog") {
	this->_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
	std::cout << &this->_brain << std::endl;
}

Dog::Dog(const Dog &pug) : Animal("Dog") {
	this->_brain = NULL;
	std::cout << "Copy constructor called" << std::endl;
	*this = pug;
	std::cout << &this->_brain << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Por favor no tiren cuetes" << std::endl;
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}
