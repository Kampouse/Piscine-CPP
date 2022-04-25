/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:20:13 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/24 16:36:27 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"
int main(void)
{
	DiamondTrap kramped =  DiamondTrap("red");
	std::cout <<" expected  HP      = 100 " <<  kramped.getHp()  << std::endl;
	std::cout <<" expected  Energy  = 50 " <<  kramped.getEnergy()  << std::endl;
	std::cout <<" expected  damage  = 30 " <<  kramped.getAtackDmg()  << std::endl;
	std::cout << " expected attack from ScavTrap" << std::endl; 
	kramped.attack("the enemy");
	 DiamondTrap 	Assignation = kramped;
	std::cout << "------------------------" << std::endl;
	std::cout <<" expected  HP      = 100 " <<  Assignation.getHp()  << std::endl;
	std::cout <<" expected  Energy  = 49 " <<  Assignation.getEnergy()  << std::endl;
	std::cout <<" expected  damage  = 30 " <<  Assignation.getAtackDmg()  << std::endl;
	std::cout << "------------------------" << std::endl;
	DiamondTrap copy = DiamondTrap(Assignation);
	copy.takeDamage(10);
	std::cout << "------------------------" << std::endl;
	std::cout <<" expected  HP      = 90 " <<  copy.getHp()  << std::endl;
	std::cout <<" expected  Energy  = 49 " <<  copy.getEnergy()  << std::endl;
	std::cout <<" expected  damage  = 30 " <<  copy.getAtackDmg()  << std::endl;
	copy.whoAmI();	
}
