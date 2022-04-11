/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:02:29 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:01:58 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "fstream"

std::string line_replaced(std::string &line,char **argv)
{
		 size_t len;
		 size_t word_len;
		word_len = strlen(argv[2]);
		 while (line.find(argv[2]) != std::string::npos)
		{
			len = line.find(argv[2]); 
			  line.erase(len,word_len);	
			  line.insert(len,argv[3],strlen(argv[3]));
		}
		return(line);
}

int main(int argc,char *argv[])
{

	std::fstream file;
	std::fstream output;

	std::string line;
	std::string output_location;	
if (argc != 4)
		std::cout << "<filename> <to-replace> <string>" << std::endl;
if (argc == 4)
	{

		file.open(argv[1],std::ios::in);

		if(!file)
		{
			std::cout << "Error: not such  file found \n";
			return (0);
		}
		output_location =  argv[1];	
		output_location += ".to-replace";
		output.open(output_location,std::ios::out);
		if(!output)
		{
			std::cout << "Error: could not create file here\n";
			file.close();
			return (0);
		}
		while (1)
		{
			std::getline(file,line); 
			std::cout << line << std::endl;
			output << line_replaced(line,argv) << std::endl;
			if(file.eof())
				break;
		}
		output.close();
		file.close();
	}
}
