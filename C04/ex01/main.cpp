/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:50:45 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/24 21:08:37 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main(void)
{
	{
	std::cout << "START-------live cycle of a Animal\n";
	 Animal *doggy =    new Dog();  
	 delete   doggy;
	std::cout << "-------END\n";
	}
	std::cout << "\n\n\n\n";
	{
	 Animal  *animal[6]; 
		for(int i  = 0; i < 6; i++)
		{
			if(i < 3)
			{
				animal[i] =  new Cat();
				animal[i]->MakeSound();
				std::cout << i + 1 <<" ----------------------\n"; 
			}
			else
			{
				 animal[i] =  new Dog();
				 animal[i]->MakeSound();
				std::cout <<  i + 1 << " ----------------------\n"; 
			}
		}
		for(int i  = 0; i < 6; i++)
		{
			delete animal[i];
		}
	}

	std::cout << "other test<---------------------->" << std::endl;
	Animal   *animal = new Dog();
	Animal   *anim = new Cat();
	*anim = *animal;
	*anim = Animal(*animal); 
	delete animal;	
	delete anim;
}
