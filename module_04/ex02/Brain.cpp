# include "Brain.hpp"

Brain::Brain(void) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Mmmmm Monke";
	std::cout << "Brain constructor called" << std::endl;
}
Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}
