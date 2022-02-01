#include "ICharacter.hpp"

ICharacter::ICharacter(void) {
	std::cout << "ICharacter default constructor called" << std::endl;
	this->_name = "Generic name";
}

ICharacter::ICharacter(std::string name) {
	std::cout << "ICharacter parameter constructor called" << std::endl;
	this->_name = name;
}

void ICharacter::~ICharacter() {
	std::cout << "ICharacter destructor called" << std::endl;
}

void	ICharacter::equip(AMateria* m) {
	this->_slots[0] = m; //Modificar para que itere y compruebe
}

void	ICharacter::unequip(int idx) {
	delete this->_slots[idx]; //Dudo mucho que esto este bien
}

void	ICharacter::use(int idx, ICharacter& target) {
	this->_slots[idx].use(target);
}

std::string const & ICHaracter::getName() const {
	return this->_name;
}
