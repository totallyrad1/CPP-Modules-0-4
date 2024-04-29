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
void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name : " << this->name << ", ClapTrap name : "<< name << std::endl;
}