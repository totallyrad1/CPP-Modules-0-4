#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name){
	hit_points = 100;
	energypoints = 50;
	attackdamage = 30;
	this->name = name;
	std::cout << "DiamondTrap constructor called\n";
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap &obj){
	*this = obj;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj){
	this->name = obj.name;
	return *this;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}
void DiamondTrap::takeDamage(unsigned int amount){
	std::cout << "DiamondTrap " << name << " took " << amount << " of dmg !\n";
	hit_points -= amount;
}
void DiamondTrap::beRepaired(unsigned int amount){
	if(energypoints > 0 && hit_points > 0)
	{
		std::cout << "FragTrap " << name << " heals for " << amount << " of health !\n";
		hit_points += amount;
		energypoints--;
	}
	else
		std::cout << "FragTrap " << name << " dont have enough energy to berepaired or ur just dead\n";
}
void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name : " << this->name << ", ClapTrap name : "<< name << std::endl;
}