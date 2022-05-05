#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
# include "AMateria.hpp"

class AMateria;

class IMateriaSource {

	public:

		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

class MateriaSource : public IMateriaSource {

	private:

		AMateria*	_storage[4];

	public:

		MateriaSource(void);
		virtual ~MateriaSource();

		void learnMateria(AMateria* mater);
		AMateria* createMateria(std::string const & type);
};

 #endif