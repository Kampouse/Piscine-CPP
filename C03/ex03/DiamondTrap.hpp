/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:19:41 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/23 21:39:36 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp" 
# include "FragTrap.hpp" 
# include <iostream>

class DiamondTrap :  virtual public ScavTrap  , public FragTrap

{
	private:
		std::string _name;
	public:
		DiamondTrap(void);
	virtual void  attack(const std::string &name);
	virtual void beRepaired(unsigned int amount);
	virtual  void takeDamage(unsigned int amount);
		DiamondTrap(std::string);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		std::string getName(void) const;
		void whoAmI(void);	
		void setName(std::string name) ;
		DiamondTrap	&operator = (const DiamondTrap &copy);
};

#endif
