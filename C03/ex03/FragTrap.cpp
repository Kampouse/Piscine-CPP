/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:26:02 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/24 16:31:25 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
		_Hp = 100;
		_Energy  = 100;	
		_Attack_dmg = 30;

		this->setAtackDmg(30);
	std::cout << " FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
			_Hp = 100;
			_Energy  = 100;	
			_Attack_dmg = 30;
			this->setName(name);
		std::cout << " FragTrap Constructor called  " << std::endl;
}
FragTrap::FragTrap(unsigned int Energy)
{
			_Hp = 100;
			_Energy = Energy;
			_Attack_dmg = 30;
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
		std::cout << " FragTrap " << this->getName()  << " attack " << target  << std::endl;
	}
	else
		std::cout << " FragTrap " << this->getName()  << " is too weak to attack ;( " << target  << std::endl;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	std::cout << " Assignation operator called " << std::endl;
	this->setAtackDmg(copy.getAtackDmg());
	this->setEnergy(copy.getEnergy());
	this->setHp(copy.getHp());
	this->setName(copy.getName());
	return (*this);
}
void FragTrap:: takeDamage(unsigned int dmg)
{
		std::cout << "FragTrap "  << getName()<< " was hit "<<  " causing  of " << dmg << " lost healt with energy left -> " << getEnergy() <<  "\n";
		if(getHp() == 0)		
			return;
		else if (getHp() < dmg )		
			setHp(0);
		else		
			setHp(getHp() - dmg);
}

		void FragTrap:: beRepaired(unsigned int amount)
{
		if(getEnergy() >  0 && getHp() > 0)
	{
			if(getHp() == getMaxHealt())	
				return;
			else if(getHp() + amount  > getMaxHealt())	
			{
				std::cout << "FragTrap "  
				<< getName() << "has heal of "  << getMaxHealt() - amount <<  "\n";
				setHp(getMaxHealt());
				setEnergy(getEnergy() - 1);
				return ;
			}
			else
		{
			std::cout << "FragTrap "  << getName()<< "has heal of "  <<  amount <<  "\n";
			setHp(getHp() +  amount);
			setEnergy(getEnergy() - 1);
		}
	}
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void FragTrap::hightFivesGuys(void)
{
	std::cout << "tata HIGH-five \n";
}
