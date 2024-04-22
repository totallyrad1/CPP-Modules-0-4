#include "FragTrap.hpp"

int main()
{
	FragTrap youssef("youssef");
	FragTrap rad = FragTrap("rad");

	youssef.attack("rad");
	youssef.attack("rad");
	rad.takeDamage(0);
	rad.attack("youssef");
	youssef.takeDamage(0);
	youssef.highFivesGuys();
	rad.highFivesGuys();
	rad.beRepaired(100);
	youssef.beRepaired(100);
}