#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name)
{
		this->_name = name;
}

Zombie::~Zombie(void)
{
	//std::cout <<  this->_name <<" how could you do this to me ;(" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << this->_name << " : braiiiiiiinnnzzZ..." << std::endl;	
}
void Zombie::setName(std::string name)
{
	this->_name = name;	
}
