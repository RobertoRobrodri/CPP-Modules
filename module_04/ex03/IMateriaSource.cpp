#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		this->_storage[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] == NULL) {
			delete this->_storage[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* mater) {
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] == NULL) {
			this->_storage[i] = mater->clone();
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (type.compare(this->_storage[i]->getType() == 0))
			return this->_storage[i]->clone();
	}
	return 0;
}

MateriaSource & MateriaSource::operator=(AMateria const &mater) {
	for (int i = 0; i < 4; i++) {
		if (mater._storage[i] != NULL) {
			this->_storage[i] = mater._storage[i]->clone();
		}
		else
			this->_storage[i] = NULL;
	}
	return *this;
}
