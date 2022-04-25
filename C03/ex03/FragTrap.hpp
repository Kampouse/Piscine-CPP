/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:26:38 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/23 20:41:56 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual  ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(unsigned int  energy);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		virtual		void  beRepaired(unsigned int amount);
		virtual 	void takeDamage(unsigned int dmg);
		virtual		void attack(const std::string& target);
		void hightFivesGuys(void);
		FragTrap	&operator = (const FragTrap &copy);
};

#endif
