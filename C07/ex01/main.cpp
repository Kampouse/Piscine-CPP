/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:19:11 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/06 11:57:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int *ray =	new int[10];
	char *rayed =	new char[10];
	int cin = 0;

	int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

	while(cin < 10)
	{
			ray[cin] = 74;
			rayed[cin] = 'h';
			cin++;
	}
	iter(ray,10,generic_inc);	
	iter(rayed,10,generic_inc);	
	iter(list,10,generic_inc);
	std::cout << rayed << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << list[i] << std::endl;
	}
	std::cout << ray[0] << std::endl;
	delete [] ray;
	delete [] rayed;
}
