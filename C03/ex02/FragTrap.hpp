/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:25:34 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 20:53:20 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public  ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
	//	void  beRepaired(unsigned int amount);
	//	void takeDamage(unsigned int dmg);
       void attack(const std::string& target);
		void hightFivesGuys(void);
		FragTrap	&operator = (const FragTrap &copy);
};

#endif
