#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newarm) : arm(newarm)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << arm.getType() << std::endl;
}