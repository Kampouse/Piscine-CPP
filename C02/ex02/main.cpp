/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:14:11 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/21 13:14:59 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



#include <iostream>
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << "a and b are not != " <<  (a != b)<<std::endl;
std::cout << "a and b are not == " <<  (a == b)<<std::endl;
std::cout << "a is smaller that b > " <<  (a > b)<<std::endl;
std::cout << "a is smaller that b < " <<  (a < b)<<std::endl;
std::cout << "a and b are not >= " <<  (a >= b)<<std::endl;
std::cout << "a and b are not <= " <<  (a <= b)<<std::endl;
std::cout << "-------------------" << std::endl;
std::cout << "a + b " <<  (a + b) <<std::endl;
std::cout << "a  - b " <<  (a - b) <<std::endl;
std::cout << "a / b " <<  (a / b)<<std::endl;
std::cout << "a * b " <<  (a * b) <<std::endl;
std::cout << "b ->(b)" << b.toInt() << std::endl;
return 0;
}
