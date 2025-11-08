#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): type(weapon) {
}

// 1b. A getType() member function that
//     returns a constant reference to `type`.
//     => 상수 참조를 반환하는 함수
const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string& new_value) {
	type = new_value;
}
