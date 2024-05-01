#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal constructor called\n";
	type = "WrongAnimal";
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj){
	*this = obj;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called\n";
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj){
	this->type = obj.type;
	return *this;
}
void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound\n";
}
std::string WrongAnimal::getType() const{
	return (type);
}