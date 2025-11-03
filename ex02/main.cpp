#include <string>
#include <iostream>

// 1. Write a program that contains: [X]
//    a. A string variable initialized to "HI THIS IS BRAIN". [X]
//    b. **stringPTR**: a pointer to the string. [X]
//    c. **stringREF**: a reference to the string. [X]
int main(void) {
	// 1a.
	std::string brain_str = "HI THIS IS BRAIN";
	// 또는 생성사를 사용하여,
	// std::string brain("HI THIS IS BRAIN");
	// 1b.
	std::string* stringPTR = &brain_str;
	// 1c.
	std::string& stringREF = brain_str;
	// 2. Your program must print:
	//    a. The memory address of the string variable. [X]
	//    b. The memory address held by stringPTR.
	//    c. The memory address held by stringREF.
	//    d. The value of the string variable.
	//    e. The value pointed to by stringPTR.
	//    f. The value pointed to by stringREF.
	// 2a.
	std::cout << "The memory address of the string variable: " << &brain_str << std::endl;
	// 2b.
	std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
	// 2c.
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	// 2d.
	std::cout << "The value of the string variable: " << brain_str << std::endl;
	// 2e.
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	// 2f.
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}