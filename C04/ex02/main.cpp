/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:50:45 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/16 16:54:07 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{

	std::cout << "START-------live cycle of a Animal\n";
	 Animal *doggy =    new Dog();  
	 delete   doggy;
	std::cout << "-------END\n";
	}
	std::cout << "\n\n\n\n";
	std::cout << "a list of 3 elements\n";
	{

	 Animal  *doggy[6]; 
		for(int i  = 0; i < 6; i++)
		{
			if(i < 3)
			{
				doggy[i] =  new Cat();
				doggy[i]->MakeSound();
			}
			else
			{
				 doggy[i] =  new Dog();
				 doggy[i]->MakeSound();
			}
		}
		for (int i  = 0; i < 6; i++)
				{
					delete doggy[i];
				}
	}
			//if you uncommente this line you will get the error that prove that the cleass is abstract
			//Animal anim;
}
