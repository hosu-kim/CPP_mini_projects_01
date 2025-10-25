#include "Zombie.hpp"

// This function creates a zombie, names it, and returns it so you can use it outside
// of the function scope.
// 이 함수는 제공된 함수에 인수를 가지고 객체를 생성하고 반환한다. (힙 할당)
Zombie* newZombie(std::string name) {
	return new Zombie(name);
}
