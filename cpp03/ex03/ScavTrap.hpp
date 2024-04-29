#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &);
		ScavTrap &operator=(const ScavTrap &);
		~ScavTrap();
		ScavTrap();
		virtual void attack(const std::string& target);
		void guardGate();
};

#endif