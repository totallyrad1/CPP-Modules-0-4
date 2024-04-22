#include "ClapTrap.hpp"

int main()
{
	ClapTrap youssef("youssef");
	ClapTrap rad = ClapTrap("rad");

	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	youssef.attack("rad");
	rad.takeDamage(0);
	rad.attack("youssef");
	youssef.takeDamage(0);
	rad.beRepaired(100);
	youssef.beRepaired(100);
}