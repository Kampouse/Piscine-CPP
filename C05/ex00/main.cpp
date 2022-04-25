/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/20 05:12:44 by jemartel         ###   ########.fr       */
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
			std::cerr << e.what() << std::endl;
			delete john;
			delete steph;
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
				std::cerr << e.what() << std::endl;
				return (1);
		}
		try
		{
			grading(john,"inc");
		}
		catch(std::exception & e)
		{
			delete john;
			delete steph;
				std::cerr << e.what() << std::endl;
				return (0);
		}
		std::cout << *john;
		std::cout << *steph;
		delete john;
		delete steph;
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

				std::cerr << e.what() << std::endl;
				return (0);
		}
			delete john;
			delete steph;
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
				std::cerr << e.what() << std::endl;
				return 0;
		}
			delete john;
			delete steph;
	}
}