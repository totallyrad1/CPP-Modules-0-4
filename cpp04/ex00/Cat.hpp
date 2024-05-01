#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
class Cat : public Animal{
	public:
		Cat();
		~Cat();
		Cat &operator=(const Cat&);
		Cat(const Cat&);
		void makeSound() const;
};

#endif