/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:28:33 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/23 20:35:24 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public  ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(unsigned int energy );
		void attack(const std::string& target);
		ScavTrap	&operator = (const ScavTrap &copy);
		void guardGate();
		virtual void takeDamage(unsigned int dmg);
		virtual 	void beRepaired(unsigned int amount);
};

#endif
