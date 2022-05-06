/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:18:23 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/06 11:48:45 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "whatever.hpp"

int main(void)
{

	int val = 0;
	int valb = 2;
	std::string name = "john";
	std::string your_name = "rohny";
	std::cout <<  "val " <<  val << std::endl;
	std::cout <<  "valb "<< valb << std::endl;
	::swap(val,valb);
	std::cout <<"val " <<  val << std::endl;
	std::cout <<"valb " << valb << std::endl;
	std::cout <<  "name: " <<  name << std::endl;
	std::cout <<  "your_nameb: "<< your_name << std::endl;
	::swap(your_name,name);
	std::cout << "-----------------" << std::endl;
	std::cout <<"name: " <<  name << std::endl;
	std::cout <<"your_name: " << your_name << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout <<  (name != your_name) << std::endl ;
	std::cout << "-----------------" << std::endl;
	std::cout << "min: " <<::min(val,valb) << std::endl; 
	std::cout << "-----------------" << std::endl;
	std::cout << "max: " <<::max(val,valb) << std::endl; 
	std::cout << "min: " <<::min(name,your_name ) << std::endl; 
	std::cout << "-----------------" << std::endl;
	std::cout<< "max: " <<::max(name,your_name) << std::endl; 
	std::cout << " generic test-------------------" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "vim";
	std::string d = "vs code"; 
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	float valueA = 20;
	float valueB = 30;
	std::cout << "valueA = " << valueA << ", valueB = " << valueB << std::endl;
	::swap (valueA, valueB);
	std::cout << "valueA = " << valueA << ", valueB = " << valueB << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	return 0;
}

