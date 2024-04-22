#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int hit_points;
		int energypoints;
		int attackdamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);
		~ClapTrap();
		void attack(const std::string& target);
 		void takeDamage(unsigned int amount);
 		void beRepaired(unsigned int amount);
};


#endif