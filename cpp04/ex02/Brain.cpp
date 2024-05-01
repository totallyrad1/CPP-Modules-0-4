#include "Brain.hpp"

Brain::Brain(){
	for(int i = 0; i < 100; i++)
		ideas[i] = "an idea";
	std::cout << "brain constructor called\n";
}
Brain::Brain(const Brain &obj){
	*this = obj;
}
Brain &Brain::operator=(const Brain &obj){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	return *this;
}
Brain::~Brain(){
	std::cout << "Brain destructor called\n";
}