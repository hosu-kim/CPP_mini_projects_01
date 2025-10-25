#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name): name(name) {
// 생성자 정의
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
