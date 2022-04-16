/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:19:41 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 14:17:09 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp" 
# include "FragTrap.hpp" 
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap

{
	private:
		std::string _name;
		using FragTrap::_Hp;
		using ScavTrap::_Energy;
		using FragTrap::_Attack_dmg;

	public:
		DiamondTrap(void);
		void attack(std::string name);
		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
		DiamondTrap(std::string);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		std::string getName(void) const;
		void whoAmI(void);	
		DiamondTrap	&operator = (const DiamondTrap &copy);
};

#endif
