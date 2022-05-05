#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		this->_storage[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void) {
	delete [] this->_storage;
}

void MateriaSource::learnMateria(AMateria*) {
	
}