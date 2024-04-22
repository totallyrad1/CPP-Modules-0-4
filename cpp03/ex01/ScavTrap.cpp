#include "ScavTrap.hpp"

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << name << " is not in gate keeper mode\n";
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	hit_points = 100;
	energypoints = 50;
	attackdamage = 20;
	std::cout << "ScavTrap constructor called\n";
}
ScavTrap::ScavTrap(const ScavTrap &obj){
	std::cout << "ScavTrap copy constructor called\n";
	*this = obj;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &obj){
	std::cout << "ScavTrap copy assignement operator called\n";
	this->name = obj.name;
	return *this;
}
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called\n";
}
void ScavTrap::attack(const std::string& target){
	if(energypoints > 0 && hit_points > 0)
	{
		energypoints--;
		std::cout << "ScavTrap " << name << " attacks " <<target << ", causing " << attackdamage << " points of damage!\n";
	}
	else
		std::cout << "ScavTrap " << name << " dont have enough energy to attack or ur just dead\n";
}
void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << name << " took " << amount << " of dmg !\n";
	hit_points -= amount;
}
void ScavTrap::beRepaired(unsigned int amount){
	if(energypoints > 0 && hit_points > 0)
	{
		std::cout << "ScavTrap " << name << " heals for " << amount << " of health !\n";
		hit_points += amount;
		energypoints--;
	}
	else
		std::cout << "ScavTrap " << name << " dont have enough energy to berepaired or ur just dead\n";
}