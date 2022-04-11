/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:54:11 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:54:47 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name   = name;
}


HumanB::~HumanB(void)
{
}

void HumanB::attack(void)
{
	if(!this->_weapon)
		std::cout << "am too broke for a wepon\n";
	else
		std::cout << this->_name <<" with there : " <<  this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon  &wepon)
{
	_weapon = &wepon;
}
