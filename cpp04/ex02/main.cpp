#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


void f()
{
	system("leaks Polymorphism");
}

int main()
{
	int n_of_animals;

	atexit(f);
	n_of_animals = 100;
	const Animal **animals;

	animals = new const Animal*[n_of_animals];
	for(int i = 0; i < n_of_animals; i++)
	{
		if(i < n_of_animals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for(int i = 0; i < n_of_animals; i++)
			delete animals[i];
	delete []animals;
}

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	atexit(f);
// 	delete j;//should not create a leak
// 	delete i;

// 	return 0;
// }