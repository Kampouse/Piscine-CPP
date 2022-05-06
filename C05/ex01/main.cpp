/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/04 15:05:21 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "cstring"

int main(int argc,char *argv[])
{
	Bureaucrat *john = NULL;
	Form *formed = NULL;
	(void)argc;
		
	if(argc != 2)	
		return (0);
	if (strcmp(argv[1],"1") == 0)
	{
		try
		{
			john = new Bureaucrat("john",100);			
		}
		catch(std::exception &e )
		{
			std::cerr << e.what();
			delete john;
		}
		try
		{
			formed = new Form("the first day at school teste", 100,25);
		}
		catch(std::exception &e )
		{
			std::cerr << e.what();
			std::cout << "Excepted succes got Failure";
			delete formed;
			delete john;
			return 0;
		}
		john->SignForm(*formed);
		std::cout << *formed << std::endl;
		delete john;
		delete formed;
	}
	if (strcmp(argv[1],"2") == 0)
	{
		try
		{
			john = new Bureaucrat("john",100);			
		}
		catch(std::exception &e )
		{
			std::cerr << e.what();
			delete john;
		}
		try
		{
			formed = new Form("the last day at school ", 99,99);
		}
		catch(std::exception &e )
		{
			std::cerr << e.what();
			delete formed;
			delete john;
			return 0;
		}
		try
		{
			john->SignForm(*formed);
		}
		catch(std::exception &e)
		{
			e.what();
		}
		std::cout << *formed << std::endl;
		delete john;
		delete formed;
	}
	if (strcmp(argv[1],"3") == 0)
	{
		try
		{
			john = new Bureaucrat("john",174);			
		}
		catch(std::exception &e )
		{
			std::cout << "Excepted: Grade too low : got : ";
			std::cerr << e.what()  << std::endl;
			delete john;
			return 0;
		}
		try
		{
			formed = new Form("the last day at school ", 99,85);
		}
		catch(std::exception &e )
		{
			std::cerr << e.what() << std::endl;
			delete formed;
			delete john;
			return 0;
		}
		try
		{

		john->SignForm(*formed);
		}
		catch(std::exception  &e)
		{
			e.what();
		}
		std::cout << *formed << std::endl;
		delete john;
		delete formed;
	}
	if (strcmp(argv[1],"4") == 0)
	{
		try
		{
			john = new Bureaucrat("john",100);			
		}
		catch(std::exception &e )
		{
			std::cerr << e.what() << std::endl;
			delete john;
			return 0;
		}
		try
		{
			formed = new Form("the last day at school ", -100,-250);
		}
		catch(std::exception &e )
		{
			std::cerr << e.what() << std::endl ;
			delete formed;
			delete john;
			return 0;
		}
		john->SignForm(*formed);
		std::cout << *formed << std::endl;
		delete john;
		delete formed;
	}
	if (strcmp(argv[1],"5") == 0)
	{
		std::cout << "------REAL BEHAVIOR-------" << std::endl;
		try
		{
			john = new Bureaucrat("john",20);
		}
		catch(std::exception &e )
		{
			std::cerr << e.what() << std::endl;
			delete john;
			return 0;
		}
		try
		{
			formed = new Form("the last day at school ", 30,25);
		}
		catch(std::exception &e )
		{
			std::cerr << e.what() << std::endl ;
			delete formed;
			delete john;
			return 0;
		}
			john->SignForm(*formed);
			std::cout << *formed << std::endl;
			delete john;
			delete formed;
	}
}
