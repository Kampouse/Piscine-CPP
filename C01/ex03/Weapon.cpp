/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:55:44 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:55:46 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(const char *  type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

const  std::string& Weapon::getType(void) const
{
	return(this->_type);
}

void Weapon::setType(const std::string &str)
{
		_type = str;
}
