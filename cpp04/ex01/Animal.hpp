#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal{
	protected:
		std::string type;
		Brain *brain;
	public:
		Animal();
		Animal(const Animal &);
		virtual ~Animal();
		Animal &operator=(const Animal &);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif