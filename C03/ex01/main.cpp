#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


void fight(ClapTrap &atker, ClapTrap &victim,unsigned int  damage)
{
	atker.setAtackDmg(damage);	
	atker.attack(victim.getName());
	victim.takeDamage(atker.getAtackDmg());
}


int main(void)
{
	ScavTrap ScavTrap("Krampe");
	
}
