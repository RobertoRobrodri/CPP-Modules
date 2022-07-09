# include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal("Cat") {
	type = "cat";
	std::cout << "Parameter Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "UwU miaw UwU" << std::endl;
}

Cat & Cat::operator=(Cat const &cat) {
	this->_type = cat._type;
	return *this;
}

// WRONG CAT

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat") {
	type = "Wrongcat";
	std::cout << "Parameter WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Cat) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "UwU Wrongmiaw UwU" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &cat) {
	this->_type = cat._type;
	return *this;
}
