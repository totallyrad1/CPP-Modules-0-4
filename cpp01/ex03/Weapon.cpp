#include "Weapon.hpp"

const std::string& Weapon::getType() const {
	return (type);
}

void Weapon::setType(const std::string &Type){
	type = Type;	
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::Weapon(){

}