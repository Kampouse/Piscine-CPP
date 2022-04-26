#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Constructor called" << std::endl;
		this->setName("DEFAULT");
		this->setHp(10);
		this->setEnergy(100);
		this->setAtackDmg(30);
}

FragTrap::FragTrap(std::string name)
{

		this->setName(name);
		this->setHp(10);
		this->setEnergy(100);
		this->setAtackDmg(30);

		std::cout << " FragTrap Constructor called  " << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << " FragTrap Destructor called " << std::endl;
}

	void FragTrap::attack(const std::string& target)
{
	if(getEnergy()  > 0)
	{
		this->setEnergy(getEnergy() - 1);
		std::cout << " FragTrap " << this->getName()  << " attack " << target  <<  " :"  <<  this->getAtackDmg() << std::endl;
	}
	else
		std::cout << " FragTrap " << this->getName()  << " is too low in term of Energy  ;( " << target  << std::endl;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	std::cout << " Assignation operator called " << std::endl;
	this->setAtackDmg(copy.getAtackDmg());
	this->setName(copy.getName());
	this->setEnergy(copy.getEnergy());
	this->setHp(copy.getHp());
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap constructor called" << std::endl;
	*this = copy;
}

void FragTrap::hightFivesGuys(void)
{
	std::cout << "tata HIGH-five \n";
}
