#include "Zombie.hpp"

int	main(void) {

	// Zombie class testing
	std::cout << "Zombie class testing" << std::endl;
	Zombie zombie_1("Zombie 1");
	zombie_1.announce();

	// newZombie function testing
	std::cout << "\nnewZombie function testing" << std::endl;
	Zombie* zombie_2 = newZombie("Zombie 2");
	zombie_2->announce();

	// randomChump function testing
	std::cout << "\nrandomChump function testing" << std::endl;
	randomChump("Zombie 3");

	delete zombie_2;
	return 0;
}
