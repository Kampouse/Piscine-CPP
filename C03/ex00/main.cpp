#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"


void fight(ClapTrap &atker, ClapTrap &victim,unsigned int  damage)
{
	atker.setAtackDmg(damage);	
	atker.attack(victim.getName());
	victim.takeDamage(atker.getAtackDmg());
}


int main(void)
{
	
	int random;
	ClapTrap red = ClapTrap("tata");
	ClapTrap Krampe = ClapTrap("kio");

	srand(time(NULL));
	while(1)
	{
			random	=	std::rand() % 10; 
			if(random > 5)
				fight(red,Krampe, rand() % 10) ;
			if(random < 5)
				fight(Krampe,red,rand() % 10);
			if(red.getHp() == 0 || Krampe.getHp() == 0)
				break;
			if(red.getHp() < 5)
				{
					red.beRepaired(rand() % 5);

				}
			if(Krampe.getHp() < 5)
				{
					Krampe.beRepaired(rand() % 5);
				}
	}
		if(red.getHp() == 0 || red.getEnergy() == 0)
		{
			std::cout <<"ClapTrap :" << red.getName() << " died \n";
			std::cout <<"had  HP :" << red.getHp() << "\n";
			std::cout <<"had  Energy :" << red.getEnergy() << "\n";
		}
		else
		{
			std::cout <<"ClapTrap :" << Krampe.getName() << " died\n";
			std::cout <<"had  HP :" << Krampe.getHp() << "\n";
			std::cout <<"had  Energy :" << Krampe.getEnergy() << "\n";
		}
}
