#include "Harl.hpp"

int main() {
	Harl harl;

	std::cout << "This is DEBUG mode:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nThis is INFO mode:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nThis is WARNING mode:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nThis is ERROR mode:" << std::endl;
	harl.complain("ERROR");

	return (0);
}
