#include "Ice.hpp"

Ice::Ice(){
	type = "ice";
}
Ice::Ice(const Ice &obj){
	*this = obj;
}
Ice &Ice::operator=(const Ice &obj){
	this->name = obj.name;
	return *this;
}
Ice::~Ice(){}
Ice* Ice::clone() const{
	Ice *newice = new Ice();

	return newice;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}