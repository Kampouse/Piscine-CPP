/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:20:13 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/23 21:56:26 by jemartel         ###   ########.fr       */
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
	std::cout <<" expected  HP      = 100 " <<  kramped.getHp()  << std::endl;
	std::cout <<" expected  Energy  = 50 " <<  kramped.getEnergy()  << std::endl;
	std::cout <<" expected  damage  = 30 " <<  kramped.getAtackDmg()  << std::endl;
	std::cout << " expected attack from ScavTrap" << std::endl; 
	kramped.attack("hello");
}
