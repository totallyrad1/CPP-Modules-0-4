#include "Dog.hpp"

Dog::Dog(){
	std::cout << "dog constructor called\n";
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(const Dog &obj){
	*this = obj;
}
Dog &Dog::operator=(const Dog &obj){
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
	return *this;
}
Dog::~Dog(){
	std::cout << "dog destructor called\n";
	delete brain;
}
void Dog::makeSound() const{
	std::cout << "Dog sound\n";
}