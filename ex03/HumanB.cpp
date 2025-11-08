#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): name(name) {
}

void HumanB::setWeapon(Weapon& weapon) {
	weapon_type = &weapon;
}

void HumanB::attack() const {
	if (weapon_type == nullptr) {
		std::cout << "can't attack without a weapon." << std::endl;
	} else {
		std::cout << " attacks with their " << weapon_type->getType() << std::endl;
	}
}
