/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:29:33 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:40:06 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{

}
void Karen::debug(void)
{
	std::cout << "(def karen_debug \"big bop am a bot i say  let over lambda\")\n";
}
void Karen::error(void)
{
	std::cout << "(def karen_error \"monad are only monoid  in the familiy of endofunctor\")\n"; 
}

void Karen::warning(void)
{
	std::cout << "(defn  karen_warning [you]  (println \"you pricks \" karen_info ))\n (karen_warning \"redboard\") ";
}

void Karen::info(void)
{
	std::cout << "(def karen_info   \"survery from the minisitery of   defense require  your attention immediatly for a inspection of your  user inteface\")\n"; 
}

Karen::~Karen(void)
{

}
void Karen::complain(std::string str)
{
ptr_funct_karen ptr[4] = 
{
	&Karen::debug, 
	&Karen::info,
	&Karen::warning, 
	&Karen::error 
};
std::string options [4] = 
{
		"DEBUG", 
		"INFO",
		"WARNING",
		"ERROR",
};
	for(int i = 0; i < 4; i++)
	{
			if(options[i] == str)
			{
							while(i < 4)
							((this)->*ptr[i++])();
				return;
			}
	}
	std::cout << "Syntax error reading source at :1:1 Unmatched delimiter: )\n";
}
