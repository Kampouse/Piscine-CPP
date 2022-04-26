/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:35:31 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 21:35:15 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./Cat.hpp"


Cat::Cat(void)
{
	std::cout << "Cat constructor called\n";
	Animal::type = "cat";
	_brain = new Brain("hello");
}
void Cat::MakeSound(void)const
{
	std::cout << "I AM A CAT I RIQUIRE YOUR ATTENTION \n";
}

Cat::~Cat(void)
{
 std::cout << " Cat destructor called \n";
 delete _brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	type = copy.type;
	_brain = new Brain(*copy._brain);
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "catt assignation operator called" << std::endl;
	type = copy.type;
	delete _brain;
	_brain = new Brain(*copy._brain);
	return (*this);
}
