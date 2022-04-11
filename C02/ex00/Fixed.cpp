/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:06:22 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 20:07:38 by jemartel         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "copy constructor called" << std::endl;
	this->setRawBits(copy.getRawBits());	
}

Fixed	&Fixed::operator = (const Fixed &copy)
{
	std::cout << "copy assignment operator called" << std::endl;
	this->_FixedPointNumber = copy.getRawBits();
	return (*this);
}
