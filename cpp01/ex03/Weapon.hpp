#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
	public:
		const std::string &getType() const;
		void setType(const std::string &);
		Weapon(std::string type);
		Weapon();

	private:
		std::string type;
};


#endif