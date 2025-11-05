#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon_type)
		: name(name), weapon_type(weapon_type) {
}

// a member function attack()
// that displays:
// `<name> attacks with their <weapon type>`
void HumanA::attack() const {
	std::cout << name << "attacks with their" << weapon_type << std::endl;
}