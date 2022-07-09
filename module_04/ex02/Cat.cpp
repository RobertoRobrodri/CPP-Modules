# include "Cat.hpp"

Cat & Cat::operator=(Cat const &nyan_cat) {
	this->_type = nyan_cat.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->ideas[i] = nyan_cat._brain->ideas[i];
	}
	return *this;
}

Cat::Cat(void) : Animal("Cat"){
	this->_brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal("Cat") {
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

void	Cat::makeSound(void) const {
	std::cout << "UwU miaw UwU" << std::endl;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}
