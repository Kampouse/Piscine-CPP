#include "Zombie.hpp"


Zombie *zombieHorde(int Number,std::string name)
{
	Zombie *zombie = new Zombie[Number]; 

	for(int i = 0; i < Number ; i++)
		zombie[i].setName(name); 
	for(int i = 0; i < Number ; i++)
		zombie[i].annonce(); 
	return (zombie);
}



