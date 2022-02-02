#include "ICharacter.hpp"

Character & Character::operator=(Character const &npc) {
	this->_name = npc.getType();
	for(int i = 0; i < 4; i++)
		if (npc._slots[i] != NULL)
			this->_slots[i] = npc._slots[i].clone();
	return *this;
}

void ICharacter::~ICharacter() {
	std::cout << "ICharacter destructor called" << std::endl;
}

Character::Character(void) {
	std::cout << "Character default constructor called" << std::endl;
	this->_name = "Yago NPC";
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(std::string const &name) {
	std::cout << "Character parameter constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(Character const &character) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = character; //Hacer overloading de =
}

// Falta destructor que tiene que usar Delete con los slots
Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_slots[i] != NULL)
			delete this->_slots[i];
}

std::string const & Character::getName(void) {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	this->_slots[idx] = NULL;
}

void Character::use(int idx, ICHaracter& target) {
	this->_slots[idx].use(target);
}
