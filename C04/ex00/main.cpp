/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:50:45 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/15 08:31:06 by jemartel         ###   ########.fr       */
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
	sheesh->MakeSound();
	cat->MakeSound();
	dog->MakeSound();
	delete sheesh;
	delete dog;
	delete cat;
}
