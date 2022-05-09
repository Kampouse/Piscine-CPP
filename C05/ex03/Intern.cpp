/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 03:31:38 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/09 15:43:16 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern as been hired" << std::endl;
}
Intern::~Intern(void)
{
	std::cout << "Intern as been fired" << std::endl;
}

Form * Intern::makeForm(std::string first,std::string second)
{

 enum Enum{robot, pardon,shurbery };
 static const char *str[]= {"robotomy request","pardon request","shurbery request"};

int inc = 0;	
int numb = 0;	

Form *form   = NULL;
	while (inc != 3)
	{
		numb = strcmp(first.c_str(),str[inc]);
		if (numb == 0)
			break;
		inc++;
	}
	std::cout << inc << std::endl;
	switch(inc)
	{
		case robot:
		{
			   form =  new RobotomyRequestForm(second); 
				std::cout << "Intern Created this form" << std::endl;  
				break;
		}
		case pardon:
		{
			   form =  new PresidentPardonForm(second); 
				std::cout << "Intern Created this form" << std::endl;  
				break;
		}
		case shurbery:
			{
			   form =  new ShrubberyCreationForm(second); 
				std::cout << "Intern Created this form" << std::endl;  
				break;
			}
		default:
			std::cout << "request \" " <<  first   << " \" not found ;( " << second << std::endl ; 
	}
	return (form);
}
