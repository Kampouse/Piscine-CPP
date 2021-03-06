/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:26:51 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 21:18:52 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		unsigned int _Hp;
		std::string _name;
		unsigned int _Energy;
		unsigned int _Attack_dmg;

	const static  unsigned int  _max_healt;
	public:
		ClapTrap(std::string);
		ClapTrap(void);
	virtual ~ClapTrap(void);
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
		void setName(std::string name);
		unsigned int getMaxHealt(void)const;
		ClapTrap	&operator = (const ClapTrap &copy);
};

#endif
