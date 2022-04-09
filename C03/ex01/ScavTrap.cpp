#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->setEnergy(50);
	this->setHp(100);
	this->setAtackDmg(13);
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << " ScavTrap Destructor called" << std::endl;
}
