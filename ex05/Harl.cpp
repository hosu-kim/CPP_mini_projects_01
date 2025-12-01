#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for"
				 "my 7XL-double-cheese-triple-pickle-"
				 "special-ketchup-burger. "
				 "I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs"
				 "more money. "
				 "You didn't put enough bacon in my burger! "
				 "If you did, I wouldn't be asking for more!"
				 << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon "
				 "for free. "
				 "I've been coming for years, "
				 "whereas you started working here just last month."
				 << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! "
				 "I want to speak to the manager now!"
				 << std::endl;
}

void Harl::complain(std::string level) {
	// string array
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	// `void (Harl::*ptr[4])(void)`
	//   1. `ptr[4]`:
	//      I'm an array named `ptr` of size 4.
	//   2. `*ptr[4]`:
	//      That array holds **pointers**.
	//   3. `Harl::*`:
	//      But they aren't just regular pointers.
	//      They point to members of the `Harl` class.
	//   4. `(void)`:
	//      Those functions take no parameters.
	//   5. `void`(at the start):
	//      And they return no value when executed.
	//   6. `void (my name)(void)`:
	//      I'm a function pointer sandwithched 
	//      between the return type and the parameters.
	void (Harl::*ptr[4])(void) = { &Harl::debug, &Harl::info,
								  &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			// `(this->*ptr[i])()`
			//   1. `()`:
			//      I'm a call button of functions.
			//   2. `this->`:
			//      I must be used to call function pointers.
			(this->*ptr[i])();
			return;
		}
	}
}