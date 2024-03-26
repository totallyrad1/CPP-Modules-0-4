#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA{
	public:
		HumanA(std::string , Weapon &);

		void attack();
	private:
		Weapon &arm;
		std::string name;
};

#endif 