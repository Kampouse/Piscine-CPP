/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 14:07:13 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstring>
#include <exception>

void  grading(Bureaucrat *user,std::string str)
{
	if(str == "inc")
	while(1)
	{
		user->IncrementGrade();
	}
	if(str == "dec")
	while(1)
	{
		user->DecrimentGrade();
	}
}


int main(int argc,char *argv[])
{
	Bureaucrat *john = NULL;
	Bureaucrat *steph = NULL;
	(void)argc;
	if (argc != 2)
		return 0;
	if (strcmp(argv[1],"1") == 0)
	{
		try
		{
			 john =  new Bureaucrat("john", 100);
			 steph = new Bureaucrat("georgia", 100);
		}
		catch(std::exception & e)
		{
			delete john;
			delete steph;
			std::cerr << e.what() << std::endl;
				return (1);
		}
		try
		{
			john->IncrementGrade();
			steph->DecrimentGrade();
		}
		catch(std::exception & e)
		{
			delete john;
			delete steph;
			std::cout << "Exception  was found ----------------->>>" << std::endl;
			std::cerr << e.what() << std::endl;
				return (1);
		}
		std::cout << *john;
		std::cout << *steph;
		delete john;
		delete steph;
		std::cout << "No Execption was handled ----------------->>" << std::endl;
			  return (0);
	}

	if (strcmp(argv[1],"2") == 0)
	{
		try
		{

			 john =  new Bureaucrat("john", -10);
			 steph = new Bureaucrat("georgia", 2589);
		}
		catch(std::exception & e)
		{
			delete john;
			delete steph;
			std::cout << "Exception  was found ----------------->>>" << std::endl;
			std::cerr << e.what() << std::endl;
				return (0);
		}
			delete john;
			delete steph;
			std::cout << "No Execption was handled ----------------->>" << std::endl;
	}
	if (strcmp(argv[1],"3") == 0)
	{
		try
		{
			 john =  new Bureaucrat("john", 100);
			 steph = new Bureaucrat("georgia", 100);
			 grading(john,"dec");
		}
		catch(std::exception & e)
		{
			delete john;
			delete steph;
			std::cout << "Exception  was found ----------------->>>" << std::endl;
				std::cerr << e.what() << std::endl;
				return 0;
		}
			delete john;
			delete steph;

			std::cout << "No Exception  was found ----------------->>>" << std::endl;
	}
	if (strcmp(argv[1],"4") == 0)
	{
		std::cout << "other test ----------------- " << std::endl;
		try
		{
			 john =  new Bureaucrat("john", 100);
			 steph = new Bureaucrat();
		}
		catch (std::exception & e)
		{
			delete john;
			delete steph;
			std::cout << "Exception  was found ----------------->>>" << std::endl;
				std::cerr << e.what() << std::endl;
				return 0;
		}
			*john = *steph;
			 Bureaucrat *no_name = new Bureaucrat(*john);
			std::cout << *no_name << std::endl;
			std::cout << *john << std::endl;
			*john = *no_name;
			no_name->DecrimentGrade();
			john->IncrementGrade();
			std::cout << *john;
			std::cout << *no_name;
			delete john;
			delete steph;
			delete no_name;
			std::cout << "No Exception  was found ----------------->>>" << std::endl;
	}
}
