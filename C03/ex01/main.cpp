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
	ScavTrap *kio =  new ScavTrap("kio");
	ScavTrap *krampe =   new ScavTrap("tata");
	
	while(krampe->getHp() > 0)
	{
		fight(*kio,*krampe);
	}
	kio->guardGate();


	std::cout << "before" << kio->getName() << std::endl;
	*kio = *krampe;
	std::cout << "after" <<	kio->getName() << std::endl;
	delete kio;
	delete krampe;
}
