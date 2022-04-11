/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:14:11 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 20:15:20 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



int main( void )
{


Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
Fixed  l( 5 );
Fixed  t( b );
a = Fixed( 1234.4321f );

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
std::cout << "d is " << l + t << " as integer" << std::endl;
std::cout << "d is --->>> " << ++l << " as integer" << std::endl;
std::cout << "d is --->>> " << l++ << " as integer" << std::endl;
return 0;
}
