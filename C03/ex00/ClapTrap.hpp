#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:

	std::string _name;
	unsigned int _Hp;
	unsigned int _Energy;
	unsigned int _Attack_dmg;
	const static  unsigned int  _max_healt;
	public:
		ClapTrap(std::string);
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int dmg);
		void beRepaired(unsigned int amoun);

		unsigned int getHp(void)const;
		std::string getName(void)const;
		unsigned int getEnergy(void)const;
		unsigned int getAtackDmg(void)const;
		void setHp(int numb);
		void setEnergy(int numb);
		void setAtackDmg(int numb);









		ClapTrap	&operator = (const ClapTrap &copy);

};

#endif
