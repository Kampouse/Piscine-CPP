/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:26:15 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 14:26:17 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if(getEnergy()  > 0)
	{
		this->setEnergy(getEnergy() - 1);
		std::cout << " ScavTrap " << this->getName()  << " attack " << target  << std::endl;
	}
	else
		std::cout << " ScavTrap " << this->getName()  << " is too weak to attack ;( " << target  << std::endl;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << " Assignation operator called " << std::endl;
	this->setAtackDmg(copy.getAtackDmg());
	this->setEnergy(   copy.getEnergy());
	this->setHp(   copy.getHp());
	return (*this);
}
void ScavTrap:: takeDamage(unsigned int dmg)
{
		std::cout << "ScavTrap "  << getName()<< " was hit "<<  " causing  of " << dmg << " lost healt with energy left -> " << getEnergy() <<  "\n";
		if(getHp() == 0)		
			return;
		else if (getHp() < dmg )		
			setHp(0);
		else		
			setHp(getHp() - dmg);
}

		void ScavTrap:: beRepaired(unsigned int amount)
{
		if(getEnergy() >  0 && getHp() > 0)
	{
			if(getHp() == getMaxHealt())	
				return;
			else if(getHp() + amount  > getMaxHealt())	
			{
				std::cout << "ScavTrap "  
				<< getName() << "has heal of "  << getMaxHealt() - amount <<  "\n";
				setHp(getMaxHealt());
				setEnergy(getEnergy() - 1);
				return ;
			}
			else
		{
			std::cout << "ScavTrap "  << getName()<< "has heal of "  <<  amount <<  "\n";
			setHp(getHp() +  amount);
			setEnergy(getEnergy() - 1);
		}
	}
}

	void ScavTrap::guardGate()
{
	std::cout << " ScavTrap now in --> gate keeper mode \n";
}
