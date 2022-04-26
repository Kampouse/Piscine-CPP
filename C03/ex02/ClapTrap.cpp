/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:01:06 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 21:00:48 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


const   unsigned int  ClapTrap::_max_healt = 10;
ClapTrap::ClapTrap(void)
{

	std::cout << "ClapTrap constructor called" << std::endl;
	this->_Hp = 10;
	this->_Energy =  10;
	this->_Attack_dmg = 0;

}
ClapTrap::ClapTrap(std::string name)
{
	
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name =  name;
	this->_Hp = 10;
	this->_Energy =  10;
	this->_Attack_dmg = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap  destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	_Attack_dmg =  copy.getAtackDmg();
	_name = copy.getName();
	_Energy =  copy.getEnergy();
	_Hp =  copy.getHp();
	return (*this);
}
unsigned int ClapTrap::getHp(void)const
{
	return (_Hp);
}
unsigned int ClapTrap::getEnergy(void)const
{
	return (_Energy);
}
unsigned int ClapTrap::getAtackDmg(void)const
{
	return	(_Attack_dmg);
}
		void ClapTrap::setHp(int num)
{
		this->_Hp = num;
}

		void ClapTrap::setName(std::string name)
{
		this->_name = name;
}


		void ClapTrap::setAtackDmg(int num)
{
		this->_Attack_dmg = num;
}

		void ClapTrap::setEnergy(int num)
{
		this->_Energy = num;
}

		void ClapTrap:: attack(const std::string& target)
{
			if (getEnergy() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ClapTrap "  << _name << " attacks "<< target <<  " causing " << _Attack_dmg << " point of dmg  with energy left -> "<<  _Energy <<"\n";
	}
}

		void ClapTrap:: takeDamage(unsigned int dmg)
{
		std::cout << "ClapTrap "  << _name << " was hit "<<  " causing  of " << dmg << " lost healt with energy left -> " << _Energy <<  "\n";
		if(getHp() == 0)		
			return;
		else if (getHp() < dmg )		
			setHp(0);
		else		
			setHp(getHp() - dmg);
}

		void ClapTrap:: beRepaired(unsigned int amount)
{
		if(getEnergy() >  0 && getHp() > 0)
	{

			if(getHp() == _max_healt)	
				return;
			else if(getHp() + amount  > _max_healt)	
			{

				std::cout << "ClapTrap "  << _name << "is now full health" <<  "\n";
				setHp(_max_healt);
				setEnergy(getEnergy() - 1);
				return ;
			}
			else
		{
			std::cout << "ClapTrap "  << _name << "has heal of "  <<  amount <<  "\n";
			setHp(getHp() +  amount);
			setEnergy(getEnergy() - 1);
		}
	}
}

	std::string ClapTrap::getName(void)const
{
		return (_name);
}
 unsigned int ClapTrap::getMaxHealt(void)const
{
	return (ClapTrap::_max_healt);
}

std::ostream &operator<<(std::ostream &output, ClapTrap  const &elem )
{
	std::cout <<  "name: " << elem.getName () << " Energy :" << elem.getEnergy() << " has an healt of: " << elem.getHp () << " attack dmg: " <<  elem.getAtackDmg()<< std::endl;
	return (output);
}
