#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(const char *  type);
		const  std::string& getType(void) const;
		void setType(const std::string &type);
		~Weapon(void);

};

#endif
