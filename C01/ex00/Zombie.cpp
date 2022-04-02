#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
		this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout <<  this->_name <<" how could you do this to me ;(" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << this->_name << " : braiiiiiiinnnzzZ..." << std::endl;	
}
