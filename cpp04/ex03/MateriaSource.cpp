#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	this->memory = new AMateria*[4];
	this->memory[0] = NULL;
	this->memory[1] = NULL;
	this->memory[2] = NULL;
	this->memory[3] = NULL;
}
MateriaSource::~MateriaSource(){
	delete [] memory;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &){
	return *this;
}
MateriaSource::MateriaSource(const MateriaSource &){}

void MateriaSource::learnMateria(AMateria* m){
	int i = 0;
	while(i < 4)
	{
		if(memory[i] == NULL)
			break;
		i++;
	}
	if(i < 4)
	{
		memory[i] = m;
	}
	else
		std::cout << "no available space in materias memory\n";
}
AMateria* MateriaSource::createMateria(std::string const & type){
	if(type == "ice"){
		AMateria *newice = new Ice();

		return newice;
	}
	else if(type == "cure"){
		AMateria *newcure = new Cure();

		return newcure;
	}
	else{
		std::cout << "undefined type " << type << " consider using ice/cure\n";
		return 0;
	}
}