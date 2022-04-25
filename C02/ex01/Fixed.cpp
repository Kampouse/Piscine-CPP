/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:08:28 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/21 11:51:36 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
	std::cout << "default constructor called" << std::endl;
	 setRawBits(0);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_FixedPointNumber);
}
void Fixed::setRawBits(int const raw)
{
	_FixedPointNumber = raw;
}

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointNumber = number << Fixed::_fraction_point;
}

Fixed::Fixed(float const number)
{
	std::cout << "float constructor called" << std::endl;
	this->_FixedPointNumber = roundf(number  * ( 1 << Fixed::_fraction_point));

}


Fixed::Fixed(const Fixed &copy)
{

	std::cout << "copy constructor called" << std::endl;

	this->setRawBits(copy.getRawBits());	
}
int Fixed::toInt(void)const
{
	return (this->_FixedPointNumber >> _fraction_point);
}
float Fixed::toFloat(void)const
{
	return ( this->_FixedPointNumber  / (float)(1 << this->_fraction_point));
}
Fixed	&Fixed::operator = (const Fixed &copy)
{
	this->_FixedPointNumber = copy.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Fixed const &FixedPoint)
{

	output << FixedPoint.toFloat();
	return(output);

}
