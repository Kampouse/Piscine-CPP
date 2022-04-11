/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:05:56 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 14:29:20 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
		Zombie *zombie;

		zombie = new_zombie("Emanual the zombie");					
		zombie->annonce();
		delete zombie;
		random_chump("hangry");
}

