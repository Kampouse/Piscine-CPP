#include "Weapon.hpp"

	Weapon::Weapon(const char *  type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

const  std::string& Weapon::getType(void) const
{
	return(this->_type);
}

void Weapon::setType(const std::string &str)
{
		_type = str;
}
