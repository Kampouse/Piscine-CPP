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
	FragTrap krampef =  FragTrap("tata");
						krampef.hightFivesGuys();
						krampef.attack("toto");
	ScavTrap krampea =  ScavTrap("tata");
						krampea.guardGate();
						krampea.attack("toto");
	ClapTrap krampei =  ClapTrap("tata");
						krampei.attack("italia");
}
