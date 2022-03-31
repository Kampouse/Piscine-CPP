#include <iostream>

#include "./Contact.class.hpp"
#include "./PhoneBook.class.hpp"


int main(void)
{
	std::string line;
	// get  user input;
	PhoneBook phonebook ;
		std::cout << "\033[2J\033[1;1H";
		std::cout << "select an option: add, search, exit\n";
	while (1)
	{
		std::cout  << ">> " ;
	 getline(std::cin,line);
	if (line  == "add")
	{
		std::cout  << "add a user\n";
		phonebook.addContact();
	}
	else if (line  == "search")
	{
		std::cout  << "search a user" << std::endl;
		std::cout  << ">> ";
			 getline(std::cin,line);
		 if (line.find_first_not_of("0123456789") == std::string::npos)
			{
				 if(line.find('0') != std::string::npos)
					std::cout << " your not bro anymore; you cant read page 0 \n";
				else
					phonebook.searchContact(std::stoi(line));
			}
			else
				std::cout << "bro this is not a number try again with search; and enter a 'number' \n";
	}
	else if (line  == "exit")
			break;
	else
				std::cout << "\033[2J\033[1;1H"  
						  << "select an option: add, search, exit \n" 
						  << "previous line: "
						  << line 
						  << std::endl;
	}
}
