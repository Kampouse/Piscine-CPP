/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/05 16:20:05 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "cstring"
#include <ostream>

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
		if(argc != 2)
			return 0;	
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
			hello = NULL;
			try
			{
				 hello  = new Bureaucrat("john", -100);
			}	
			catch(std::exception & e )
			{
				std::cerr  << e.what() << std::endl;
			}
			delete hello;

		}
		if (strcmp(argv[1],"6") == 0)
		{
			Bureaucrat *hello;
			RobotomyRequestForm  *formed;

				hello = NULL;
				formed = NULL;
			try
			{
				 formed = new RobotomyRequestForm("the only  bullshit");
				 hello  = new Bureaucrat("john", -50);
				hello->executeForm(*formed);
				hello->SignForm(*formed);
			}	
			catch(std::exception & e )
			{
			std::cerr << e.what()  << std::endl;
			}
			std::cout << *formed  << std::endl;
			delete hello;
			delete formed;

		}
		/* correct shape */
		if (strcmp(argv[1],"7") == 0)
		{
			Bureaucrat *hello;
			RobotomyRequestForm  *formed;

				hello = NULL;
				formed = NULL;
			try
			{
				hello  = new Bureaucrat("john", 1);
				formed = new RobotomyRequestForm("the only  bullshit ");
				hello->SignForm(*formed);
				hello->executeForm(*formed);
			}	
			catch(std::exception & e )
			{
			std::cerr << e.what()  << std::endl;
			}
			delete hello;
			delete formed;
		}
		if (strcmp(argv[1],"8") == 0)
		{
			Bureaucrat *hello;
			RobotomyRequestForm  *formed;

				hello = NULL;
				formed = NULL;
			try
			{
				hello  = new Bureaucrat("john", -100);
				formed = new RobotomyRequestForm("the only  bullshit ");
				hello->SignForm(*formed);
				hello->executeForm(*formed);
			}	
			catch(std::exception & e )
			{
				delete hello;
				delete formed;
				std::cerr << e.what()  << std::endl;
			}
			delete hello;
			delete formed;
			return(0);
		}
		if (strcmp(argv[1],"9") == 0)
		{
			Bureaucrat *hello;
			RobotomyRequestForm  *formed;

				hello = NULL;
				formed = NULL;
			try
			{
				hello  = new Bureaucrat("john", 10);
				formed = new RobotomyRequestForm("the only  bullshit ");
			//	hello->SignForm(*formed);
				hello->executeForm(*formed);
			}	
			catch(std::exception & e )
			{
			std::cerr << e.what()  << std::endl;
				delete hello;
				delete formed;
				return(0);
			}
			delete hello;
			delete formed;
		}
		if (strcmp(argv[1],"10") == 0)
		{
			RobotomyRequestForm  *formed = new RobotomyRequestForm("the only one");
			RobotomyRequestForm  *formedcopy = new RobotomyRequestForm(*formed);
			delete formedcopy;
			delete formed;
		// if you were too remove this  comment it will show that "formed" is abstract
			//Form   formed;
		}
		if (strcmp(argv[1],"11") == 0)
		{
			Bureaucrat *hello;
			RobotomyRequestForm  *formed;

				hello = NULL;
				formed = NULL;
			try
			{
				hello  = new Bureaucrat("john", 40);
				formed = new RobotomyRequestForm("the only  bullshit ");
				hello->SignForm(*formed);
				hello->executeForm(*formed);
			}	
			catch(std::exception & e )
			{
				delete hello;
				delete formed;
				std::cerr << e.what()  << std::endl;
			}
			delete hello;
			delete formed;
			return (0);
		}
		if (strcmp(argv[1],"12") == 0)
		{
			Bureaucrat *hello;
			ShrubberyCreationForm  *formed;
				hello = NULL;
				formed = NULL;
			try
			{
				hello  = new Bureaucrat("john", 40);
				formed = new ShrubberyCreationForm("the only  bullshit ");
				hello->SignForm(*formed);
				hello->executeForm(*formed);
			}	
			catch(std::exception & e )
			{
				delete hello;
				delete formed;
				std::cerr << e.what()  << std::endl;
			}
			delete hello;
			delete formed;
			return (0);
		}
		if (strcmp(argv[1],"13") == 0)
		{
			Bureaucrat *hello;
			PresidentPardonForm  *formed;
				hello = NULL;
				formed = NULL;
			try
			{
				hello  = new Bureaucrat("john", 1);
				formed = new PresidentPardonForm("the only  bullshit ");
				hello->SignForm(*formed);
				hello->executeForm(*formed);
			}	
			catch(std::exception & e )
			{
				delete hello;
				delete formed;
				std::cerr << e.what()  << std::endl;
			}
			delete hello;
			delete formed;
			return (0);
		}

}
