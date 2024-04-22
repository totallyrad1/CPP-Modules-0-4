#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		int hit_points;
		int energypoints;
		int attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);
		~ClapTrap();
		virtual void attack(const std::string& target);
 		virtual void takeDamage(unsigned int amount);
 		virtual void beRepaired(unsigned int amount);
};


#endif