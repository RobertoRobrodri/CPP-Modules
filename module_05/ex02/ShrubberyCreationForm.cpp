#include "ShrubberyCreationForm.hpp"
#include <fstream>

AsciiTree::AsciiTree(std::string target) : Form("Weird word for a bunch of trees", 0, 145, 137) {
	this->_target = target;
	std::cout << "Shrubbery Creation default constructor called" << std::endl;
}

AsciiTree::~AsciiTree(void) {
	std::cout << "Shrubbery Creation destructor called" << std::endl;
}

std::string	AsciiTree::getTarget(void) const {
	return this->_target;
}

void AsciiTree::execute(Bureaucrat const & executor) const {
	this->can_exec(executor);
	this->is_signed();
	std::ofstream tree_file (this->getTarget()+="_shrubbery");
	tree_file << " Suppose its a madafaking tree "<< std::endl;
	tree_file.close();
}