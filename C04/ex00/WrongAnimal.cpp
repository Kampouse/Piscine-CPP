/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 07:41:11 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/30 17:03:35 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string)
{
	this->type = "WrongAnimal";

	std::cout << "WrongAnimal constructor called\n";
}
WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called\n";
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &copy)
{
	std::cout << "Assignation operator called" << std::endl;
		this->type = copy.type;
		return (*this);
}

std::string WrongAnimal::getType()const
{
	return(this->type);
}
void WrongAnimal::MakeSound(void)const
{
		if (type ==  "wrongcat")
			std::cout << "THIS THE WRONG CAT COMMMON!\n";
		else if (type ==  "cat")
			std::cout << "MEOW";
	return;
}
