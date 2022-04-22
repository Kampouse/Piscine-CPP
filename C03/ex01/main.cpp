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
	while (krampe->getHp() > 0)
		fight(*kio,*krampe);
	kio->guardGate();
	kio->guardGate();
	std::cout << "other test ---------" << std::endl;
	std::cout << *kio ;
	*kio = *krampe;
	ScavTrap *copyed = new ScavTrap(*kio); 
	std::cout <<"- copyed item - "<< *copyed ;
	delete kio;
	delete copyed;
	delete krampe;
}
