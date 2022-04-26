/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:50:45 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/25 21:22:31 by jemartel         ###   ########.fr       */
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
	 Animal *catty =  new Cat();
	 Animal *doggy =  new Dog();
	 Animal *anime =  new Animal();

	std::cout << "Expecting soud of a  Wrong cat " << std::endl;
	sheesh->MakeSound();
	std::cout << "------------------------------" << std::endl;
	std::cout << "Expected type  Wrong Cat: " <<  sheesh->getType() << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Expecting soud of a cat" << std::endl;
	catty->MakeSound();
	std::cout << "Expected type Cat--: " <<  catty->getType() << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Expecting soud of a dog" << std::endl;
	doggy->MakeSound();
	std::cout << "------------------------------" << std::endl;
	std::cout << "Expected type Dog: " <<  doggy->getType() << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Expected sound of a Animal" << std::endl;
	anime->MakeSound();
	std::cout << "------------------------------" << std::endl;
	std::cout << "Expected type Animal: " <<  anime->getType() << std::endl;
	std::cout << "------------------------------" << std::endl;
	 delete sheesh;
	 delete doggy;
	 delete catty;
	 delete anime;
}
