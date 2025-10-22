#include "Zombie.hpp"

// Implement your own tests to ensure
// that your zombieHorde() function works as ex-pected.
// Try calling announce() for each of the zombies.

int main() {
	int n = 4;
	char name[] = "Hi";
	Zombie* zombies = zombieHorde(n, name);

	for (int i=0; i<n; i++) {
		zombies[i].announce();
	}
	// delete[]는 배열 안 모든 객체의 소멸자를 호출하고
	// 할당된 메모리를 해제한다. 
	delete[] zombies;
}