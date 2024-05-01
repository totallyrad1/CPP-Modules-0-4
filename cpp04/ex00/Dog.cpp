#include "Dog.hpp"

Dog::Dog(){
	std::cout << "dog constructor called\n";
	type = "Dog";
}
Dog::Dog(const Dog &obj){
	*this = obj;
}
Dog &Dog::operator=(const Dog &obj){
	this->type = obj.type;
	return *this;
}
Dog::~Dog(){
	std::cout << "dog destructor called\n";
}
void Dog::makeSound() const{
	std::cout << "Dog sound\n";
}