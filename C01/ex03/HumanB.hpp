/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:55:24 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 16:13:20 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:

	std::string _name;
	 Weapon		*_weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);

		void setWeapon(Weapon &wepon);
		void attack(void);
};

#endif
