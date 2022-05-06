/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:20:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/06 13:18:19 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(void)
{
	std::cout << "beginning of test string ------" << std::endl;
	Array<std::string > lst2(20);
	Array <std::string> cpylst2;
	for (int i = 0; i < 20; i++)
	{
		lst2[i] = "Hello";
		std::cout << lst2[i] << std::endl; 	
	}
	lst2[10] = "World";
	for (int i = 0; i < 20; i++)
	{
		std::cout << lst2[i] << std::endl; 	
	}
	std::cout << " end of test string ------" << std::endl;
	std::cout << "beginning of test copy ------" << std::endl; 
	cpylst2 = lst2;
	for (int i = 0; i < 20; i++)
	{
		std::cout << cpylst2[i] << std::endl; 	
	}
	cpylst2[10] = "zig is for ziggy"; 
	std::cout << " actual copy  ------" << std::endl;
	 Array<std::string> copyed = Array<std::string> ( cpylst2);
	for (int i = 0; i < 20; i++)
	{
		std::cout << copyed[i] << std::endl; 	
	}
	std::cout <<	"sized of copy : " <<  copyed.size() << std::endl; 
	std::cout << " end of test copy ------" << std::endl;
	std::cout << "start of  exception" << std::endl;
	try {
		Array<std::string> lst(20);
		lst[21] = "Hello";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
