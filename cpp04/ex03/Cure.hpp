#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &);
		Cure &operator=(const Cure &);
		~Cure();
		
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif