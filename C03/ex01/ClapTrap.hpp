#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	    protected :
		unsigned int _Hp;
		std::string _name;
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
		unsigned int getMaxHealt(void)const;

		void setHp(int numb);
		void setEnergy(int numb);
		void setAtackDmg(int numb);
		void setName(std::string name);
		ClapTrap	&operator = (const ClapTrap &copy);

};
std::ostream &operator<<(std::ostream &output, ClapTrap  const &elem );

#endif
