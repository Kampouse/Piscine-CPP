#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual   ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		void attack(const std::string& target);
		ScavTrap	&operator = (const ScavTrap &copy);
		void guardGate();
		void takeDamage(unsigned int dmg);
		void beRepaired(unsigned int amount);
};
std::ostream &operator<<(std::ostream &output, ClapTrap  const &elem );
#endif
