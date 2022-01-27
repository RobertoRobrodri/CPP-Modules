# include "Cat.hpp"

Cat & Cat::operator=(Cat const &nyan_cat) {
	this->_type = nyan_cat.getType();
	this->_brain = new Brain();
	return *this;
}

Cat::Cat(void) {
	this->_type = "Cat";
	this->_brain = new Brain();
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
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}
