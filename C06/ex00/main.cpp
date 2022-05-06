/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:49:17 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/05 18:49:22 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cmath>
#include <exception>
#include <iostream>
#include <string>
#include <climits> 

std::string   trim_string(char *str)
{
	int inc = 0;
	int len = 0;


	while(str[inc] && std::isspace(str[inc]))
			inc++;	
	while(str[inc + len] && !std::isspace(str[inc + len]))
			len++;	
	return ( std::string(str,inc,len));
}


void  printas_char(double numb)
{
		std::cout << "char   ";
		if( numb < CHAR_MIN  || numb > CHAR_MAX || isnan(numb))
			std::cout << "impossible" << std::endl;
		if(std::isprint(numb))	
			std::cout << static_cast<unsigned char>(numb) << std::endl;
		else
			std::cout << "non displayable" << std::endl;
}


void  printas_int(double numb)
{

		std::cout << "int:  ";
		if(numb >= INT_MIN  && numb  <= INT_MAX  && !isnan(numb) && !isinf(numb)) 
			std::cout << static_cast<int>(numb) << std::endl;
		else if(isnan(numb))
				std::cout << "nan" << std::endl; 
		else if(isinf(numb))
			std::cout <<  (numb < 0 ? "-": "" ) << "inf" << std::endl;
		else
	 		std::cout << "impossible";
}


void  printas_float(double numb)
{
	std::cout << "float:  "; 
	if(isnan(numb))
	{
		std::cout << "nan" << std::endl;
		return;
	}
	else if(isinf(numb))
	{

		std::cout <<  (numb < 0 ? "-": "" ) << "inf" << std::endl;
		return ;
	}
	std::cout << static_cast<float>(numb) << "f" << std::endl; 
			
}


void  printas_double(double numb)
{
	std::cout << "double number:  ";
		if(isnan(numb))
	{
		std::cout << "nan" << std::endl; 
		return;
	}
		if(isinf(numb))
	{
			std::cout <<  (numb < 0 ? "-": "" ) << "inf" << std::endl;
			return;
	}
		else
			std::cout << static_cast<double>(numb)  << "f" << std::endl;
}

void conversion(double numb)
{
	std::cout << "input: " << numb <<std::endl;
	printas_char(numb);
	printas_int(numb);
	printas_float(numb);
	printas_double(numb);
	return ;

}

int main(int argc,char *argv[])
{

	double  temp;

	if (argc == 2)
	{
			std::string   value  = trim_string(argv[1]);
		if (value.length() == 1 && std::isprint(value[0]) && !std::isdigit(value[0]))
			temp =  value[0];
		else
			{
				try
				{
					temp = std::stod(argv[1]);
				}
				catch(std::exception & e)
				{
					std::cout << "error as occured" << std::endl;
					return(0);
				}
			}
			conversion(temp);
			// should look for a type ;
	}
	return 0;
}
