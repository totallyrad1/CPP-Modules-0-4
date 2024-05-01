#include "Animal.hpp"

Animal::Animal(){
	type = "Animal";
}
Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}
Animal::Animal(const Animal &obj){
	*this = obj;
}
Animal &Animal::operator=(const Animal &obj){
	this->type = obj.type;
	return *this;
}
void Animal::makeSound() const{
	std::cout << "Animal Sound\n";
}

std::string Animal::getType() const{
	return type;
}