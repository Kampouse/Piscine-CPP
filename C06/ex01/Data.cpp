/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:49:00 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/05 18:49:42 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void):data(10),value("default")
{
	std::cout << "constructor called" << std::endl;
}

Data::Data(int elem,std::string val):data(elem),value(val)
{
	std::cout << "constructor called" << std::endl;
}
Data::~Data(void)
{
	std::cout << "Destructor called" << std::endl;
}

Data::Data(const Data &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Data	&Data::operator = (const Data &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->data = copy.data;
	this->value  = copy.value;
	return (*this);
}

std::string Data::getStr(void)const
{
return(this->value);
}
int Data::getVal(void)const
{
return(this->data);
}

std::ostream &operator<<(std::ostream &output, Data const &user)
{
		output  << user.getStr() << " : " << user.getVal() << std::endl;
		return (output);
}

	Data *deserialize( uintptr_t raw)
{


	Data* value =  reinterpret_cast<Data *>(raw);
	return (value);
}
	uintptr_t  serialize(Data *ptr)
{
	uintptr_t value =  reinterpret_cast<uintptr_t>(ptr);
	return (value);

}

