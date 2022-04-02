/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:05:56 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/02 17:26:28 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *new_zombie(int Number,std::string name)
{
	Zombie *zombie = new Zombie[Number]; 

	for(int i = 0; i < Number ; i++)
		zombie[i].setName(name); 
	for(int i = 0; i < Number ; i++)
		zombie[i].annonce(); 
	return (zombie);
}

int main(void)
{
		Zombie *zombie;
		zombie = zombieHorde(5,"redboard");					
		delete [] zombie;
}

