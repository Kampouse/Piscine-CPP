/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/19 17:19:44 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "cstring"
#include <stdexcept>

void grading(Bureaucrat *user, std::string str) {
  if (str == "inc")
    while (1) {
      user->IncrementGrade();
    }
  if (str == "dec")
    while (1) {
      user->DecrimentGrade();
    }
}

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;


		if (strcmp(argv[1],"1") == 0)
		{
			  Bureaucrat john("john", 150);
			  RobotomyRequestForm hello("the only  bullshit");
			  john.SignForm(hello);
			  john.executeForm(hello);
			  return (0);
		}
		if (strcmp(argv[1],"2") == 0)
		{
			  Bureaucrat john("john", 10);
			  RobotomyRequestForm hello("the only  bullshit");
			  john.SignForm(hello);
			  john.executeForm(hello);
			  return (0);
		}
		if (strcmp(argv[1],"3") == 0)
		{
			  Bureaucrat john("john", 25);
			  RobotomyRequestForm hello("the only  bullshit");
			  john.SignForm(hello);
			  john.executeForm(hello);
			  return (0);
		}
		if (strcmp(argv[1],"4") == 0)
		{
			  Bureaucrat john("john", 100);
			  RobotomyRequestForm hello("the only  bullshit");
			  john.SignForm(hello);
			  john.executeForm(hello);
			  return (0);
		}
		if (strcmp(argv[1],"5") == 0)
		{
			Bureaucrat *hello;
			try
			{
				 *hello  = new Bureaucrat("john", -100);
			}	
			catch(std::runtime_error e &)
			{

			}
			
			
			
			delete hello;

		}
}
