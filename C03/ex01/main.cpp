#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


void fight(ScavTrap &atker, ScavTrap &victim)
{
	atker.attack(victim.getName());
	victim.takeDamage(atker.getAtackDmg());
}


int main(void)
{
	ScavTrap kio =  ScavTrap("kio");
	ScavTrap krampe =  ScavTrap("tata");
	
	while(krampe.getHp() > 0)
	{
		fight(kio,krampe);
	}

	kio.guardGate();
}
