#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		/*private members*/
		std::string _name;
		  Weapon		&_Weapon;
	public:
		HumanA(std::string name,Weapon &weapon);
		~HumanA(void);
		void attack(void);
};

#endif
