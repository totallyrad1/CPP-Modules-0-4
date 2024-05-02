#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
	protected:
		AMateria **AMaterias;
		std::string name;
	public:
		Character(std::string);
		~Character();
		Character &operator=(const Character &);
		Character(const Character &);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif