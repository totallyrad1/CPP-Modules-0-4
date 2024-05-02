#include "Cure.hpp"

Cure::Cure(){
	this->type = "cure";
}
Cure::Cure(const Cure &obj){
	*this = obj;
}
Cure &Cure::operator=(const Cure &obj){
	this->name = obj.name;
	return *this;
}
Cure::~Cure(){}

Cure* Cure::clone() const{
	Cure *newcure = new Cure();
	newcure->name = this->name;
	return newcure;
}
void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}