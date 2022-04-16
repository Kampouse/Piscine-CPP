/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:20:13 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/14 15:31:05 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void fight(FragTrap &atker, FragTrap &victim)
{
	atker.attack(victim.getName());
	victim.takeDamage(atker.getAtackDmg());
}

int main(void)
{
		DiamondTrap kramped =  DiamondTrap("red");
		std::cout << "energy:" << kramped.getEnergy() << std::endl;
}
