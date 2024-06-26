#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called\n";
	type = "Cat";
}
Cat::~Cat(){
	std::cout << "Cat destructor called\n";
}
Cat &Cat::operator=(const Cat&obj){
	this->type = obj.type;
	return *this;
}
Cat::Cat(const Cat & obj){
	*this = obj;
}
void Cat::makeSound() const{
	std::cout << "Cat Sound\n";
}