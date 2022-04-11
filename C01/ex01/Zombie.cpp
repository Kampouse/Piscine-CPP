/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:52:46 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:52:47 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string name)
{
		this->_name = name;
}

Zombie::~Zombie(void)
{
	//std::cout <<  this->_name <<" how could you do this to me ;(" << std::endl;
}

void Zombie::annonce(void)
{
	std::cout << this->_name << " : braiiiiiiinnnzzZ..." << std::endl;	
}
void Zombie::setName(std::string name)
{
	this->_name = name;	
}
