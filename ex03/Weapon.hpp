#include <string>

// 1. Implement a Weapon class that has:
//    a. A private attribute type, which is a string.
//    b. A getType() member function that returns a constant reference to type.
//    c. A setType() member function that sets type using the new value passed as a pa-rameter.

class Weapon {
	private:
		std::string str;
	public:
		getType();
		setType();
}