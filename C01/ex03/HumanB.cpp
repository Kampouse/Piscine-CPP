#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name   = name;
}


HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	if(!this->_weapon)
		std::cout << "am too broke for a wepon\n";
	else
		std::cout << this->_name <<" with there : " <<  this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon  &wepon)
{
	_weapon = &wepon;
}
