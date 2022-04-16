/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:35:31 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 23:24:36 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./Cat.hpp"

Cat::Cat(std::string)
{

}
Cat::Cat(void)
{
	std::cout << "Cat constructor called\n";
	Animal::type = "cat";
	_brain = new Brain();
}
void Cat::MakeSound(void)const
{
	std::cout << "MEWWOWE\n";
}

Cat::~Cat(void)
{
 std::cout << " Cat destructor called \n";
 delete _brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << " Cat Assignation operator called" << std::endl;
	type = copy.type;
	_brain = copy._brain;
	
		return (*this);
}
