#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : arm(NULL){
	name = Name;
}

void HumanB::setWeapon(Weapon &newarm){
	arm = &newarm;
}

void HumanB::attack()
{
	if (!arm)
		std::cout << name << " unarmed" << std::endl;
	else
		std::cout << name << " attacks with their " << arm->getType() << std::endl;
}