/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:54:26 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:54:27 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) :  _name(name),_Weapon(weapon)
{

}
HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
	std::cout << this->_name << " with there : " << this->_Weapon.getType() << '\n';
}
