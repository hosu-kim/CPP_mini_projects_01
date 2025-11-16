#include <iostream>
#include <fstream>


// [X] 1. Create a program that takes three parameters in the following order:
//    a filename and two strings, s1 and s2.
// [ ] 2. It must open the file <filename> and copy its content into a new file <filename>.replace,
//    replacing every occurrence of s1 with s2.
// [ ] 3. Using C file manipulation functions is forbidden and will be considered cheating.
//     All the member functions of the class std::string are allowed, except replace.
int main(int argc, char* argv[]) {

	if (argc != 4)
		return (1);
	
	std::ifstream file(argv[1]);

	if (!file.is_open()) {
		std::cout << "Failed to open file." << std::endl;
		return (1);
	}
	
	std::string line;
	while (getline(file, line)) {

	}

	file.close();
	return (0);
}