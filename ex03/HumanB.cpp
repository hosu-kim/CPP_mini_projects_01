#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): name(name) {
}

void HumanB::setWeapon(Weapon& weapon) {
	weapon_type = &weapon;
}

void HumanB::attack() const {
	if (weapon_type == NULL) {
		std::cout << name << "can't attack without a weapon." << std::endl;
	} else {
		std::cout << name << " attacks with their " << weapon_type->getType() << std::endl;
	}
}
