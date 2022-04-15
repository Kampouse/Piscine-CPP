/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:35:31 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 08:27:13 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./Cat.hpp"

Cat::Cat(std::string)
{

}
Cat::Cat(void)
{
	Animal::type = "cat";
}
Cat::~Cat(void)
{

}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = type;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	*this = copy;
		return (*this);
}
