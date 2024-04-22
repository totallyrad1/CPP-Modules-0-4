#include "FragTrap.hpp"

FragTrap::FragTrap(){
	hit_points = 100;
	energypoints = 100;
	attackdamage = 30;
	std::cout << "Default FragTrap constructor called\n";
}

FragTrap::FragTrap(std::string name){
	hit_points = 100;
	energypoints = 100;
	attackdamage = 30;
	this->name = name;
	std::cout << "FragTrap constructor called\n";
}
FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called\n";
}
FragTrap::FragTrap(const FragTrap &obj){
	*this = obj;
}
FragTrap &FragTrap::operator=(const FragTrap &obj){
	this->name = obj.name;
	return *this;
}
void FragTrap::attack(const std::string& target){
	if(energypoints > 0 && hit_points > 0)
	{
		energypoints--;
		std::cout << "FragTrap " << name << " attacks " <<target << ", causing " << attackdamage << " points of damage!\n";
	}
	else
		std::cout << "FragTrap " << name << " dont have enough energy to attack or ur just dead\n";
}
void FragTrap::takeDamage(unsigned int amount){
	std::cout << "FragTrap " << name << " took " << amount << " of dmg !\n";
	hit_points -= amount;
}
void FragTrap::beRepaired(unsigned int amount){
	if(energypoints > 0 && hit_points > 0)
	{
		std::cout << "FragTrap " << name << " heals for " << amount << " of health !\n";
		hit_points += amount;
		energypoints--;
	}
	else
		std::cout << "FragTrap " << name << " dont have enough energy to berepaired or ur just dead\n";
}
void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " is requesting a high five!\n";
}