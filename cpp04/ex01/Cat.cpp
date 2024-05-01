#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called\n";
	type = "Cat";
	brain = new Brain();
}
Cat::~Cat(){
	std::cout << "Cat destructor called\n";
	delete brain;
}
Cat &Cat::operator=(const Cat&obj){
	this->type = obj.type;
	this->brain = obj.brain;
	return *this;
}
Cat::Cat(const Cat & obj){
	*this = obj;
}
void Cat::makeSound() const{
	std::cout << "Cat Sound\n";
}