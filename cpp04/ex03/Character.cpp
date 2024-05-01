#include "Character.hpp"

Character::Character(std::string name){
	this->name = name;
	this->AMaterias = new AMateria*[4];
	this->AMaterias[0] = NULL;
	this->AMaterias[1] = NULL;
	this->AMaterias[2] = NULL;
	this->AMaterias[3] = NULL;
}

Character::~Character(){
	delete []AMaterias;
}

Character &Character::operator=(const Character &obj){
	this->AMaterias = obj.AMaterias;
	this->AMaterias[0] = obj.AMaterias[0];
	this->AMaterias[1] = obj.AMaterias[1];
	this->AMaterias[2] = obj.AMaterias[2];
	this->AMaterias[3] = obj.AMaterias[3];
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
	while(i < 4)
	{
		if(AMaterias[i] == NULL)
			break;
		i++;
	}
	if(i < 4)
		AMaterias[i] = m;
	else
		std::cout << "unavailable space , cant equip the materia\n";
}
void Character::unequip(int idx){
	if(idx < 4 || AMaterias[idx] == NULL)
		AMaterias[idx] = NULL;
	else
		std::cout << "no materia equiped at slot n " << idx << "\n";
}
void Character::use(int idx, ICharacter& target){
	if(idx < 4 || AMaterias[idx] == NULL)
		AMaterias[idx]->use(target);
	else
		std::cout << "no materia equiped at slot n " << idx << "\n";
}