/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:53:58 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:55:31 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		/*private members*/
		std::string _name;
		  Weapon		&_Weapon;
	public:
		HumanA(std::string name,Weapon &weapon);
		~HumanA(void);
		void attack(void);
};

#endif
