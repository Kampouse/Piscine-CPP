/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:28:12 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/23 22:18:40 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	_Hp = this->ScavTrap::_Hp;
	_Energy = this->FragTrap::_Energy;
	_Attack_dmg = this->FragTrap::getAtackDmg();
	_name = ClapTrap::getName();
	std::cout << " Diamond_trap Constructor called " << std::endl;

}
DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),FragTrap(ScavTrap::_Energy)
	
{
	_Hp = this->ScavTrap::_Hp;
	_Energy = this->ScavTrap::_Energy;
	_Attack_dmg = this->FragTrap::getAtackDmg();
	_name = ClapTrap::getName();
	std::cout << " Diamond  Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << " Diamond  Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

std::string DiamondTrap::getName(void) const
{
	return(this->_name);
}
void DiamondTrap::setName(std::string name) 
{
	this->_name  = name;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "i am a Diamond and my name is" << "|"<< this->getName() << "|" <<  ClapTrap::getName() << std::endl ;
}


void DiamondTrap:: takeDamage(unsigned int dmg)
{
		std::cout << "DiamondTrap "  << _name << " was hit "<<  " causing  of " << dmg << " lost healt with energy left -> " << _Energy <<  "\n";
		if(getHp() == 0)		
			return;
		else if (getHp() < dmg )		
			setHp(0);
		else		
			setHp(getHp() - dmg);
}

		void DiamondTrap:: beRepaired(unsigned int amount)
{
		if(getEnergy() >  0 && getHp() > 0)
	{

			if(getHp() == _max_healt)	
				return;
			else if(getHp() + amount  > _max_healt)	
			{

				std::cout << "DiamondTrap "  << _name << "has heal of "  << _max_healt  - amount <<  "\n";
				setHp(_max_healt);
				setEnergy(getEnergy() - 1);
				return ;
			}
			else
		{
			std::cout << "DiamondTrap "  << _name << "has heal of "  <<  amount <<  "\n";
			setHp(getHp() +  amount);
			setEnergy(getEnergy() - 1);
		}
	}
}

void DiamondTrap::attack(const std::string & name)
{
	ScavTrap::attack(name);
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Assignation operator called " << std::endl;
	setAtackDmg(copy.getAtackDmg());
	setName(copy.getName());
	setEnergy( copy.getEnergy());
	setHp(copy.getHp());
	std::cout << " DiamondTrap  Assignation operator called" << std::endl;
	return (*this);
}
