#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

// 1. Implement a Weapon class that has:
//    a. A private attribute `type`, which is a string. [X]
//    b. A getType() member function that
//       returns a constant reference to `type`. [X]
//       => 상수 참조를 반환하는 함수
//    c. A setType() member function that sets type using the new value passed as a parameter.
//       => 매개변수로 전달받은 새 값으로 타입을 설정하는 함수

class Weapon {
	private:
		// 1a. A private attribute `type`, which is a string.
		std::string type;
	public:
		Weapon(std::string weapon);
		const std::string& getType() const;
		void setType(const std::string& new_value);
};

#endif