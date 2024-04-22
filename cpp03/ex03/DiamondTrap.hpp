#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap ,  public FragTrap{
	private:
		std::string name;
		int hit_points;
		int energypoints;
		int attackdamage;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &);
		DiamondTrap &operator=(const DiamondTrap &);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI();
};

#endif