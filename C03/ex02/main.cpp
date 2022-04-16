/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:25:05 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 14:25:06 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
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
	FragTrap *krampef =  new FragTrap("tata");
						krampef->hightFivesGuys();
						krampef->attack("toto");
	ScavTrap *krampea =   new ScavTrap("tata");
	ScavTrap *copy =   new ScavTrap();
	*copy = *krampea; 
						krampea->guardGate();
						krampea->attack("toto");
	ClapTrap *krampei =  new ClapTrap("tata");
						krampei->attack("italia");
	delete krampea;
	delete krampef;
	delete krampei;
	delete copy;
}
