#include "Weapon.hpp"
#include <iostream>

class HumanB {
	private:
		std::string name;
		Weapon* weapon_type;
	public:
		HumanB(const std::string& name);
		void setWeapon(Weapon& weapon_type);
		void attack() const;
};