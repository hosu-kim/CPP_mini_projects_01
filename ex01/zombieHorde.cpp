#include "Zombie.hpp"

// 1. It must allocate N Zombie objects in a single allocation. [X]
// =>배열로 객체들을 한번에 할당하라는 의미임.
// 2. It must initialize the zombies giving each of them the name passed as a parameter. [X]
// 3. The function returns a pointer to the first zombie. [X]
Zombie* zombieHorde(int N, std::string name) {
	// 임시 객체는 사용된 문장(;)이 끝나면 소멸된다.
	Zombie* zombie_horde = new Zombie[N];
	for (int i=0; i<N; i++) {
		zombie_horde[i] = Zombie(name);
	}
	return zombie_horde;
}