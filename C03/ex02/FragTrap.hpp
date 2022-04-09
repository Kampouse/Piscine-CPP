#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public  ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		void hightFivesGuys(void);
		FragTrap	&operator = (const FragTrap &copy);
};

#endif
