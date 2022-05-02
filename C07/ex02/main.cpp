/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:20:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/02 19:23:45 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



using std::cout;
using std::endl;
int main(void)
{

	std::auto_ptr<Array<int> > lst( new Array<int>(20));
	Array<int> &temp = *lst;
	lst->operator[](3) =  10; 
	lst->operator[](10) =  15; 
	lst->operator[](8) =  5; 
int tmp = 0;
	while(tmp < 20)
	{

		lst->operator[](tmp) =  tmp; 
		cout << lst->operator[](tmp) << endl;
		tmp++;
	}

	Array<int>val(*lst);
	Array<int>rat;
	rat = val;
	cout << temp[5] << endl;
	 cout << val[5] << 	endl;
} 

