#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat constructor called\n";
	type = "WrongCat";
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called\n";
}
WrongCat &WrongCat::operator=(const WrongCat &obj){
	this->type = obj.type;
	return *this;
}
WrongCat::WrongCat(const WrongCat &obj){
	*this = obj;
}

void WrongCat::makeSound() const{
	std::cout << "wrongcat sound\n";
}