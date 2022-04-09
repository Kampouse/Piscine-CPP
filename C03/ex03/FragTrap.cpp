#include "FragTrap.hpp"
FragTrap::FragTrap(std::string name)
{
	std::cout << " FragTrap Constructor called" << std::endl;
		this->setName(name);
		this->setHp(10);
		this->setEnergy(100);
		this->setAtackDmg(30);
}


FragTrap::FragTrap(void)
{

	std::cout << " FragTrap Constructor called" << std::endl;
		this->setHp(10);
		this->setAtackDmg(30);
}


FragTrap::~FragTrap(void)
{
	std::cout << " FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	std::cout << " Assignation operator called " << std::endl;
	this->setAtackDmg(   copy.getAtackDmg());
	this->setEnergy(   copy.getEnergy());
	this->setHp(   copy.getHp());
	return (*this);
}

void FragTrap::hightFivesGuys(void)
{
	std::cout << "tata HIGH-five \n";
}
