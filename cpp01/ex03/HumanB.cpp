#include "HumanB.hpp"

HumanB::HumanB(std::string Name){
	name = Name;
}

void HumanB::setWeapon(Weapon &newarm){
	arm = &newarm;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << arm->getType() << std::endl;
}