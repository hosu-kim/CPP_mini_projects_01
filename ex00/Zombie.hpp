#include <string>

// 1. Implement a Zombie class.: []
class Zombie {
	private:
	// a. It has a private string attribute `name`: [x]
		std::string name;

	public:
		Zombie(std::string name); // 생성자
		void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );