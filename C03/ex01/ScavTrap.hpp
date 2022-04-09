#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public  ClapTrap
{
	private:
		std::string _name;
	public:
	
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);

		ScavTrap	&operator = (const ScavTrap &copy);
};

#endif
