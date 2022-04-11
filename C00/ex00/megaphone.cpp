/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:07:30 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/06 14:59:43 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
 
int main(int argc,char **argv )
{
	char *temp;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
	if (argc >= 2)
	{
		for (int i = 1; i < argc; i++)
			{
				temp = argv[i];
				for (int i = 0; temp[i] != '\0'; i++ )
						std::cout <<  (char)std::toupper(temp[i]);
					std::cout <<  " ";
			}
				std::cout <<  "\n";
	}
    return (0);
}
