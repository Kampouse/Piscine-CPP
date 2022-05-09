/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:37:22 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/09 17:02:08 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "MutantStack.hpp"
#include "stack"
#include "vector"

int main(int argc  , char *argv[])
{
  (void)argc;
  (void)argv;
    MutantStack <std::string> stack;
	MutantStack<std::string>::iterator it;
	stack.push("42");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("hello world");
	stack.push("grognia  the great");
	it = stack.begin();
	while (it != stack.end())
	{
		std::cout << *it << std::endl;
		++it;
	}
    MutantStack <int> stock;
	MutantStack<int>::iterator iter;
	stock.push(25);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	stock.push(24);
	iter = stock.begin();
	while (iter != stock.end())
	{
		std::cout << *iter << std::endl;
		++iter;
	}
}

