/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:05:56 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/02 18:22:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"


int main(void)
{
		Zombie *zombie;
		zombie = zombieHorde(3,"redboard");
		delete [] zombie;
}
