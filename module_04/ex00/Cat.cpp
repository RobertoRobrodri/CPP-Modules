# include "Cat.hpp"

Cat::Cat(void) {
	this->_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) {
	this->_type = type;
	std::cout << "Parameter Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}
