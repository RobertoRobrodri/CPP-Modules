#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		this->_storage[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] != NULL) {
			delete this->_storage[i];
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const &mater) {
	*this = mater;
}

void MateriaSource::learnMateria(AMateria* mater) {
	if (mater == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] == NULL) {
			this->_storage[i] = mater;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (this->_storage[i]) {
		if (type.compare(this->_storage[i]->getType()) == 0)
			return this->_storage[i]->clone();
		i++;
	}
	std::cout << "Type unknown" << std::endl;
	return 0;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &mater) {
	for (int i = 0; i < 4; i++) {
		if (mater._storage[i] != NULL) {
			this->_storage[i] = mater._storage[i]->clone();
		}
		else
			this->_storage[i] = NULL;
	}
	return *this;
}
