#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "FragTrap Constructor called" << std::endl;
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
		std::cout << " FragTrap " << this->getName()  << " attack " << target  << this->getAtackDmg() << std::endl;
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

void FragTrap::takeDamage(unsigned int dmg)
{
		if(getHp() == 0)		
			return;
		else if (getHp() < dmg )		
			setHp(0);
		else		
			setHp(getHp() - dmg);
		std::cout << "FragTrap "  << getName()<< " was hit "<<  " causing  of " << dmg << " lost healt with healt left of -> " << getHp() <<  "\n";
}

		void FragTrap:: beRepaired(unsigned int amount)
{
		if(getEnergy() >  0 && getHp() > 0)
	{
			if(getHp() == getMaxHealt())	
				return;
			else if(getHp() + amount  > getMaxHealt())	
			{
				setHp(getMaxHealt());
				setEnergy(getEnergy() - 1);
				std::cout << "FragTrap "  
				<< getName() << "has heal of "  << getMaxHealt() - amount <<  "\n";


				return ;
			}
			else
		{
			setHp(getHp() +  amount);
			setEnergy(getEnergy() - 1);
			std::cout << "FragTrap "  << getName()<< "has heal of "  <<  amount <<  "\n";
		}
	}
	else
			std::cout << "FragTrap " << getName() <<  "is either too low in healt or in Energy" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void FragTrap::hightFivesGuys(void)
{
	std::cout << "tata HIGH-five \n";
}
