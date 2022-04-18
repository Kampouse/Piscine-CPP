/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/17 22:54:22 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Bureaucrat *john = nullptr;
	Form *formed = nullptr;
	(void)argc;
		
	if(argc != 2)	
		return (0);
	if (strcmp(argv[1],"1"))
	{

		try
		{
			john = new Bureaucrat("john",100);			
		}
		catch(std::runtime_error &e )
		{
			std::cerr << e.what();
			delete john;
		}
		try
		{
			formed = new Form("the first day at school teste", 100);
		}
		catch(std::runtime_error &e )
		{
			std::cerr << e.what();
			delete formed;
			delete john;
			return 0;
		}
		john->SignForm(*formed);
		delete john;
		delete formed;
	}


}
