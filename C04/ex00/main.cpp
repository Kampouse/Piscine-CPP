/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:50:45 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 23:49:56 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const WrongAnimal *sheesh =  new WrongCat();
	const Animal *dog =  new Dog();
	const Animal *cat =  new Cat();
	 Animal *catty =  new Dog();
	 Animal *doggy =  new Dog();
	sheesh->MakeSound();
	cat->MakeSound();
	dog->MakeSound();

	delete sheesh;
	delete dog;
	delete cat;
	*catty = *doggy;
	 delete doggy;
	 delete catty;

}
