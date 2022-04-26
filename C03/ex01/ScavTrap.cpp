#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setEnergy(50);
	this->setHp(100);
	this->setAtackDmg(20);
	std::cout << " ScavTrap Constructor called  " << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << " ScavTrap Destructor called " << std::endl;
}

	void ScavTrap::attack(const std::string& target)
{
	if (getEnergy()  > 0)
	{
		this->setEnergy(getEnergy() - 1);
		std::cout << " ScavTrap " << this->getName()  << " attack " << target  << " causing damage of " << this->getAtackDmg() << std::endl;
	}
	else
		std::cout << " ScavTrap " << this->getName()  << " is too weak to attack ;( " << target  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << " Assignation operator called " << std::endl;
	this->setName(copy.getName());
	this->setAtackDmg(copy.getAtackDmg());
	this->setEnergy(copy.getEnergy());
	this->setHp(copy.getHp());

	return (*this);
}

	void ScavTrap::guardGate()
{
	std::cout << " ScavTrap now in --> gate keeper mode \n";
}
