#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) :  _name(name),_Weapon(weapon)
{

}
HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
	std::cout << this->_name << " with there : " << this->_Weapon.getType() << '\n';
}
