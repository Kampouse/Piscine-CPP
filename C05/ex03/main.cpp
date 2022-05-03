/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/03 16:41:32 by jemartel         ###   ########.fr       */
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
  (void)argc;
  Form *form = NULL;
  
  Intern intern;
		if (strcmp(argv[1],"1") == 0)
	{
			 form  = intern.makeForm("shurbery request","who"); 
			 if(form)
			 form->action();
	}
		if (strcmp(argv[1],"2") == 0)
				{
					 form  = intern.makeForm("bad request sent","who"); 
					 if(form)
						 form->action();
				}
		if (strcmp(argv[1],"3") == 0)
				{
					 form  = intern.makeForm("pardon request","who"); 
					 if(form)
						 form->action();
				}
		if (strcmp(argv[1],"4") == 0)
				{

					 form  = intern.makeForm("robotomy request","who"); 
					 if(form)
						 form->action();
				}
	delete form;
}
