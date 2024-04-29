#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &);
		FragTrap &operator=(const FragTrap &);
		void attack(const std::string& target);
		void highFivesGuys(void);
};


#endif