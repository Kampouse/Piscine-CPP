/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:24:58 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 14:24:59 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public  ClapTrap
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

#endif
