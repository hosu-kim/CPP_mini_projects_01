#include "Weapon.hpp"
// 2. Create two classes: **HumanA** and **HumanB**.
//    a. They both have a Weapon and a name.
//    b. They also have a member function attack()
//       that displays (without the angle brackets):
//       `<name> attacks with their <weapon type>`
//    c. HumanA and HumanB are almost identical except for these two small details:
//       i. While **HumanA** takes the Weapon in its constructor, **HumanB** does not.
//       ii. **HumanB** may **not always** have a weapon, whereas **HumanA** will **always** be armed.
class HumanA {
	private:
		std::string name;
		Weapon weapon_type;
	public:
		HumanA(const std::string& name, const Weapon& weapon_type);
		void attack() const;
};