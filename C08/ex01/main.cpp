/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:43:28 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/08 22:15:59 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "time.h"
#include <cstdlib>
#include <vector>

int give_random_number(void)
{
	return (( rand()  / (RAND_MAX / 1000000)));
}

int main(int argc, char *argv[])
{

	if(argc == 1)
	{
		std::cout << "require  a test to  run " << std::endl;
		std::cout << "Usage: ./Span [n]" << std::endl;
	}
	else if(argc == 2 && strcmp (argv[1], "0") == 0)
	{
		try {
				std::srand(time(NULL));
				Span span(2);
				span.addNumber(give_random_number()); 
				span.addNumber(give_random_number()); 
				span.longestSpan();
			}
		catch (std::exception &e)
		{
				std::cout << e.what() << std::endl;
		}
	}
	else if(argc == 2 && strcmp (argv[1], "1") == 0)
	{
		try {
			 std::srand(time(NULL));
			 std::vector<int> tab;
				 for (int i = 0; i < 25; i++)
				 {
							 tab.push_back(give_random_number());
				 }		
					 Span span(25); 
					 span.addNumber(tab.begin(), tab.end()); 
			}
		catch (std::exception &e) 
		{
				std::cout << e.what() << std::endl;
		}
	}
	//same expression but with a set of  iterators  to init the vector to  make cleaner implemetalation
	else if(argc == 2 && strcmp (argv[1], "2") == 0)
	{
		try {
			 std::srand(time(NULL));
			 std::vector<int> tab;
				 for (int i = 0; i < 25; i++)
				 {
							 tab.push_back(give_random_number());
				 }		
				 Span span(tab.begin(), tab.end()); 
				std::cout << "will throw an exception " << std::endl;
				 span.addNumber(tab.begin(), tab.end()); 
			}
		catch (std::exception &e) 
		{
				std::cout << e.what() << std::endl;
		}
	}
	//same expression but with a set of  iterators  to init the vector to  make cleaner implemetalation
	else if(argc == 2 && strcmp (argv[1], "3") == 0)
	{
		try {
			 std::srand(time(NULL));
			 std::vector<int> tab;
				 for (int i = 0; i < 25; i++)
				 {
							 tab.push_back(give_random_number());
				 }		
				 Span span(tab.begin(), tab.end()); 
				 span. addNumber(tab.begin(), tab.end()); 
		}
		catch (std::exception &e) 
		{
				std::cout << e.what() << std::endl;
		}
	}

	else if(argc == 2 && strcmp (argv[1], "4") == 0)
	{
		try
		{
			 std::srand(time(NULL));
			 std::vector<int> tab;
				 for (int i = 0; i < 10000; i++)
							 tab.push_back(give_random_number());
				 Span span(tab.begin(), tab.end()); 

				std::cout << "longest span is: " << span.longestSpan() << std::endl;
				std::cout << "shortest span is: " << span.shortestSpan() << std::endl;
		}
		catch (std::exception &e) 
		{
				std::cout << e.what() << std::endl;
		}
	}

	if(argc == 2 && strcmp (argv[1], "5") == 0)
	{
		try
		{
			 std::srand(time(NULL));
			 std::vector<int> tab;
			 for (int i = 0; i < 10000; i++)
				 tab.push_back(give_random_number());
			Span span(10000);
			span.addNumber(tab.begin(), tab.end());
			Span span2(span); 
		}
		catch (std::exception &e) 
		{
				std::cout << e.what() << std::endl;
		}
	}
	if(argc == 2 && strcmp (argv[1], "6"))
	{
		try
		{
			 std::srand(time(NULL));
			 std::vector<int> tab;
			 for (int i = 0; i < 10000; i++)
				 tab.push_back(give_random_number());
			Span span(10000);
			span.addNumber(tab.begin(), tab.end());
			Span span2;
			span2 = span;
			std::cout << span2.shortestSpan() << std::endl;
			std::cout << span2.longestSpan() << std::endl;
		}
		catch (std::exception &e) 
		{
				std::cout << e.what() << std::endl;
		}
	}
	
}
