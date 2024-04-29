#include "FragTrap.hpp"

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
void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " is requesting a high five!\n";
}