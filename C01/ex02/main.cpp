/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:41:24 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:41:29 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str =   "HI THIS is BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	
	std::cout <<  "base string :" << str <<std::endl;
	std::cout <<  "ref string  :" << ref << std::endl;
	std::cout <<  "ptr string  :" << *ptr << std::endl;
	std::cout <<  "base adress :" << &str <<std::endl;
	std::cout <<  "ref  adress :" << &ref << std::endl;
	std::cout <<  "ptr  adress :" << &ptr << std::endl;
}
