#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap youssef("youssef");
	DiamondTrap rad = DiamondTrap("rad");

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