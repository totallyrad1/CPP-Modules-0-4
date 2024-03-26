#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanB{
	public:
		HumanB(std::string );
		void attack();
		void setWeapon(Weapon &);
	private:
		Weapon *arm;
		std::string name;
};

#endif 