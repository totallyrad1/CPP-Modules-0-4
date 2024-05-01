#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria **memory;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &);
		MateriaSource(const MateriaSource &);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif