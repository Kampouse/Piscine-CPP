/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/09 16:07:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "cstring"
#include <ostream>

int main(int argc, char *argv[]) 
{
		if(argc != 2)
	{
		std::cout << "enter a number form 1-4";

	}
			return 0;
  Form *form = NULL;
  Intern intern;

		if (strcmp(argv[1],"1") == 0)
	{
			 form  = intern.makeForm("shurbery request", "who"); 
	}
		if (strcmp(argv[1],"2") == 0)
		{
			 form  = intern.makeForm("bad request sent", "who"); 
		}
		if (strcmp(argv[1],"3") == 0)
		{
			 form  = intern.makeForm("pardon request", "who"); 
		}
		if (strcmp(argv[1],"4") == 0)
		{
			 form  = intern.makeForm("robotomy request", "who"); 
		}
	delete form;
}
