#include "ScavTrap.hpp"

int main()
{
	ScavTrap youssef("youssef");
	ScavTrap rad = ScavTrap("rad");

	youssef.attack("rad");
	youssef.attack("rad");
	rad.takeDamage(0);
	rad.attack("youssef");
	youssef.takeDamage(0);
	youssef.guardGate();
	rad.guardGate();
	rad.beRepaired(100);
	youssef.beRepaired(100);
}