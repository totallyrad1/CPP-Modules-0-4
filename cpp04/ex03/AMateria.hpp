#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
		std::string name;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &);
		AMateria &operator=(const AMateria &);
		AMateria(std::string const & type);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif