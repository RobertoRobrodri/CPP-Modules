#include "IMateriaSource.hpp"

Amateria* IMateriaSource::createMateria(std::string const & type) {
	Amateria new_materia = new Amateria(type);
	return new_materia;
}
