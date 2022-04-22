/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:20:37 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/22 14:25:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"

void fight(ClapTrap &atker, ClapTrap &victim)
{
	atker.attack(victim.getName());
	victim .takeDamage(atker.getAtackDmg());
}
int main(void)
{
	
	int random;
	ClapTrap red = ClapTrap("tata");
	ClapTrap john;
	ClapTrap Krampe = ClapTrap("kio");
	srand(time(NULL));
	while (1)
	{
			random = std::rand() % 10; 
			if(random > 5)
				fight(red,Krampe) ;
			if(random < 5)
				fight(Krampe,red);
			if(red.getHp() == 0 || Krampe.getHp() == 0 || red.getEnergy() == 0 || Krampe.getEnergy() == 0)
				break;
			if(red.getHp() < 5)
					red.beRepaired(rand() % 5);
			if(Krampe.getHp() < 5)
					Krampe.beRepaired(rand() % 5);
	}
		if (red.getHp() == 0 || red.getEnergy() == 0)
			std::cout << red << std::endl;
		else
			std::cout << Krampe  << std::endl;

	std::cout  << "other test ---------------------------\n";
	red = Krampe;
	ClapTrap  copyed(red);
	std::cout << red;
	std::cout << Krampe;
	std::cout << copyed;
}
