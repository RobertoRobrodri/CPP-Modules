#include "AMateria.hpp"
#include "ICharacter.hpp"

// AMateria STUFF
AMateria::AMateria(void) {
}

AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(AMateria const &mater) {
	*this = mater;
}

AMateria::~AMateria(void) {
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "Random bullshit, go! " << target.getName() << std::endl;
}

AMateria & AMateria::operator=(AMateria const &mater) {
	this->_type = mater._type;
	return *this;
}

// ICE THINGY

Ice::Ice(void) {
	this->_type = "ice";
}

Ice::Ice(Ice const &ice) : AMateria("Ice") {
	*this = ice;
}

Ice::~Ice(void) {
}

AMateria* Ice::clone() const {
	Ice *cube = new Ice();
	return cube;
}

void	Ice::use(ICharacter& target) {
	std::cout << "Shoots ice bolt at " << target.getName() << std::endl;
}

Ice & Ice::operator=(Ice const &mater) {
	this->_type = mater._type;
	return *this;
}

// CURE THINGY

Cure::Cure(void) {
	this->_type = "cure";
}

Cure::Cure(Cure const &potion) : AMateria("Cure") {
	*this = potion;
}

Cure::~Cure(void) {
}

AMateria* Cure::clone() const {
	Cure *potion = new Cure();
	return potion;
}

void	Cure::use(ICharacter& target) {
	std::cout << "Heals " << target.getName() << " wounds" << std::endl;
}

Cure & Cure::operator=(Cure const &mater) {
	this->_type = mater._type;
	return *this;
}