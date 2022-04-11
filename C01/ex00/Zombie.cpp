/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:52:14 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:52:16 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor called" << std::endl;
		this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout <<  this->_name <<" how could you do this to me ;(" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << this->_name << " : braiiiiiiinnnzzZ..." << std::endl;	
}
