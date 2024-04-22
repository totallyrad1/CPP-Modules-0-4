#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) : hit_points(10) , energypoints(10) , attackdamage(0){
	std::cout << "ClapTrap constructor called\n";
	name = str;
}
ClapTrap::ClapTrap(const ClapTrap &obj){
	std::cout << "ClapTrap copy constructor called\n";
	*this = obj;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &obj){
	std::cout << "ClapTrap copy assignement operator called\n";
	this->name = obj.name;
	return *this;
}
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called\n";
}
void ClapTrap::attack(const std::string& target){
	if(energypoints > 0 && hit_points > 0)
	{
		energypoints--;
		std::cout << "ClapTrap " << name << " attacks " <<target << ", causing " << attackdamage << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << name << " dont have enough energy to attack or ur just dead\n";
}
void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << name << " took " << amount << " of dmg !\n";
	hit_points -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
	if(energypoints > 0 && hit_points > 0)
	{
		std::cout << "ClapTrap " << name << " heals for " << amount << " of health !\n";
		hit_points += amount;
		energypoints--;
	}
	else
		std::cout << "ClapTrap " << name << " dont have enough energy to berepaired or ur just dead\n";
}

ClapTrap::ClapTrap() : hit_points(10) , energypoints(10) , attackdamage(0){
	std::cout << "default claptrap constructor called\n";
}