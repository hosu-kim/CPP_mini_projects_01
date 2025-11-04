#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>
#include <ostream>

// 1. Implement a Zombie class.: []
class Zombie {
	private:
		// a. It has a private string attribute `name`: [x]
		std::string name;

	public:
		Zombie();
		Zombie(std::string name); // 생성자
		~Zombie() {
			std::cout << name << ": destroyed "<< std::endl;
		}
		// b. Add a member function void announce( void ); [x]
		//    Output: `Foo: BraiiiiiiinnnzzzZ...`
		void announce(void);
};

// 2. Implement the following two functions: []
//    a. This function creates a zombie, names it,
//       and returns it so you can use it outside of the function scope.
Zombie* newZombie(std::string name);

// This function creates a zombie, names it, and makes it announce itself.
void randomChump(std::string name);

Zombie* zombieHorde(int N, std::string name);

#endif