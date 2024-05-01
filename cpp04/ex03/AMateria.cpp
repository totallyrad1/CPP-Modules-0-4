#include "AMateria.hpp"

AMateria::AMateria(){
	// std::cout << "default amateria constructor called\n";
}
AMateria::~AMateria(){
	// std::cout << "amateria destructor called\n";
}
AMateria::AMateria(const AMateria &obj){
	std::cout << "copy amateria constructor called\n";
	*this = obj;
}
AMateria &AMateria::operator=(const AMateria &obj){
	std::cout << "copy amateria assignement operator called\n";
	this->type = obj.type;
	return *this;
}
AMateria::AMateria(std::string const & type){
	std::cout << "amateria constructor called\n";
	this->type = type;
}

std::string const & AMateria::getType() const{
	return this->type;
} 

void AMateria::use(ICharacter& target){
	std::cout << "use function called from AMateria" << target.getName() << std::endl;
}