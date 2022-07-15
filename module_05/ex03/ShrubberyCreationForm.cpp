#include "ShrubberyCreationForm.hpp"
#include <fstream>

AsciiTree::AsciiTree(void) : Form("Shrubbery", 0, 145, 137), _target("Default_target") {
	std::cout << "Shrubbery Creation default constructor called" << std::endl;
}

AsciiTree::AsciiTree(std::string target) : Form("Shrubbery", 0, 145, 137), _target(target) {
	std::cout << "Shrubbery Creation parameter constructor called" << std::endl;
}

AsciiTree::AsciiTree(AsciiTree const &tree) : Form() {
	*this = tree;
	std::cout << "Shrubbery Creation copy constructor called" << std::endl;
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
	std::string name = this->getTarget() + "_shrubbery";
	std::ofstream tree_file(name.c_str(), std::ofstream::out);
	tree_file << "                                                         ." << std::endl;
	tree_file << "                                              .         ; " << std::endl;
	tree_file << "                 .              .              ;%     ;;  " << std::endl;
	tree_file << "                   ,           ,                :;%  %;   " << std::endl;
	tree_file << "                    :         ;                   :;%;'     .," << std::endl;
	tree_file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	tree_file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	tree_file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	tree_file << "               ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
	tree_file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	tree_file << "                 `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
	tree_file << "                    `:%;.  :;bd%;          %;@%;' " << std::endl;
	tree_file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	tree_file << "                        `@%.  `;@%.      ;@@%; " << std::endl;
	tree_file << "                          `@%%. `@%%    ;@@%; " << std::endl;
	tree_file << "                            ;@%. :@%%  %@@%; " << std::endl;
	tree_file << "                              %@bd%%%bd%%:; " << std::endl;
	tree_file << "                                #@%%%%%:;; " << std::endl;
	tree_file << "                                %@@%%%::; " << std::endl;
	tree_file << "                                %@@@o%;:(.,' " << std::endl;
	tree_file << "                            `.. %@@@o%::; " << std::endl;
	tree_file << "                               `)@@@o%::; " << std::endl;
	tree_file << "                                %@@(o)::; " << std::endl;
	tree_file << "                               .%@@@@%::; " << std::endl;
	tree_file << "                          ...;%@@@@@%%:;;;;,..   " << std::endl;
	tree_file.close();
}

AsciiTree & AsciiTree::operator=(AsciiTree const &tree) {
	const_cast<std::string &>(this->_name) = tree.getName();
	this->_signed = tree.getSigned();
	const_cast<int &>(this->_execute_grade) = tree.getExecGrade();
	const_cast<int &>(this->_required_grade) = tree.getGrade();
	return *this;
}