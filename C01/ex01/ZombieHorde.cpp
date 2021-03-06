/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:53:06 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:53:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie *zombieHorde(int Number,std::string name)
{
	if(Number < 0)
		Number = 0;
	Zombie *zombie = new Zombie[Number]; 

	for(int i = 0; i < Number ; i++)
		zombie[i].setName(name); 
	for(int i = 0; i < Number ; i++)
		zombie[i].annonce(); 
	return (zombie);
}



