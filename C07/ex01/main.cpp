/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:19:11 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/02 19:19:40 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int *ray =	new int[10];
	char *rayed =	new char[10];
	int cin = 0;
	while(cin < 10)
	{
			ray[cin] = 74;
			rayed[cin] = 'h';
			cin++;
	}
		iter(ray,10,generic_inc);	
		iter(rayed,10,generic_inc);	
	std::cout << rayed << std::endl;
	std::cout << ray[0] << std::endl;
	delete [] ray;
	delete [] rayed;
}
