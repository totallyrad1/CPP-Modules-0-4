#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	this->memory = new AMateria*[4];
	this->memory[0] = NULL;
	this->memory[1] = NULL;
	this->memory[2] = NULL;
	this->memory[3] = NULL;
}
MateriaSource::~MateriaSource(){
	int i = 0;
	while(i < 4)
		delete memory[i++];
	delete [] memory;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &){
	return *this;
}
MateriaSource::MateriaSource(const MateriaSource &){}

void MateriaSource::learnMateria(AMateria* m){
	int i = 0;
	int check = 1;
	while(i < 4)
	{
		if(memory[i] == m)
			check = 0;
		i++;
	}
	if(!check)
		return ;
	i = 0;
	while(i < 4)
	{
		if(memory[i] == NULL)
			break;
		i++;
	}
	if(i < 4 && check){
		memory[i] = m;
	}
	else
	{
		std::cout << "no available space in materias memory\n";
		if(m && check)
		{
			delete m;
			std::cout << "materia destroyed to avoid memory leaks\n";
		}
	}
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