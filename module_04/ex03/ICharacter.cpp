#include "ICharacter.hpp"

Character::Character(void) : _name("Yago NPC") {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			delete this->_inventory[i];
		}
	}
}

Character::Character(const Character &pnj) {
	*this = pnj;
}

std::string const & Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		std::cout << "Slot does not exits" << std::endl;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
	else
		std::cout << "Slot empty" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Slot does not exits" << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "Slot empty" << std::endl;
}

Character & Character::operator=(Character const &pnj) {
	this->_name = pnj.getName();
	for (int i = 0; i < 4; i++) {
		if (pnj._inventory[i] != NULL) {
			this->_inventory[i] = pnj._inventory[i]->clone();
		}
		else
			this->_inventory[i] = NULL;
	}
	return *this;
}
