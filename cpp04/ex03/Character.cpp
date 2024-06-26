#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(std::string name){
	this->name = name;
	this->AMaterias = new AMateria*[4];
	this->AMaterias[0] = NULL;
	this->AMaterias[1] = NULL;
	this->AMaterias[2] = NULL;
	this->AMaterias[3] = NULL;
}

Character::~Character(){
	int i = 0;
	while(i < 4)
		delete AMaterias[i++];
	delete []AMaterias;
}

Character &Character::operator=(const Character &obj){
	this->AMaterias = new AMateria*[4];
	for(int i = 0;i < 4; i++)
	{
		if(this->AMaterias && this->AMaterias[i] && obj.AMaterias && obj.AMaterias[i])
			this->AMaterias[i] = obj.AMaterias[i]->clone();
	}
	this->name = obj.name;
	return *this;
}
Character::Character(const Character &obj){
	*this = obj;
}
std::string const & Character::getName() const{
	return name;
}
void Character::equip(AMateria* m){
	int i = 0;
	int check = 1;
	while(i < 4)
	{
		if(AMaterias[i] == m)
			check = 0;
		i++;
	}
	if(!check)
		return ;
	i = 0;
	while(i < 4)
	{
		if(AMaterias[i] == NULL)
			break;
		i++;
	}
	if(i < 4 && check)
		AMaterias[i] = m;
	else
	{
		if(m && check){
			delete m;
			std::cout << "materia deleted to avoid memory leaks \n";
		}
		std::cout << "unavailable space or materia already eqiuped, cant equip the materia\n";
	}
}
void Character::unequip(int idx){
	if(idx < 4 || AMaterias[idx] == NULL)
		AMaterias[idx] = NULL;
	else
		std::cout << "no materia equiped at slot n " << idx << "\n";
}
void Character::use(int idx, ICharacter& target){
	if(idx >= 4 || AMaterias[idx] == NULL)
		std::cout << "no materia equiped at slot n " << idx << "\n";
	else
		AMaterias[idx]->use(target);
}