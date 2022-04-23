/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:20:13 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/23 21:30:18 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void fight(FragTrap &atker, FragTrap &victim)
{
	atker.attack(victim.getName());
	victim.takeDamage(atker.getAtackDmg());
}

int main(void)
{
		DiamondTrap kramped =  DiamondTrap("diamond");
		FragTrap kramping =  FragTrap("FragTrap ");
		ScavTrap krampon =  ScavTrap("scavtrap");
		
	std::cout << kramped.getEnergy();
	std::cout << kramping;
	std::cout << krampon;



}
