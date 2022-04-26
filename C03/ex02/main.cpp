/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:25:05 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 21:08:48 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

void fight(FragTrap &atker, FragTrap &victim)
{
	atker.attack(victim.getName());
	victim.takeDamage(atker.getAtackDmg());
}

int main(void)
{
	FragTrap *krampef =  new FragTrap("tata");
	FragTrap *kramped =  new FragTrap(*krampef);
	krampef->hightFivesGuys();
	krampef->hightFivesGuys();
	krampef->takeDamage(1);
	krampef->beRepaired(9);
	kramped->attack("No body");
	kramped->attack("No body");
	std::cout << *krampef << std::endl;
	std::cout << *kramped ;
	*kramped = *krampef ;
	std::cout << *krampef << std::endl;
	std::cout << *kramped ;
	delete krampef;
	delete kramped;
	
}
