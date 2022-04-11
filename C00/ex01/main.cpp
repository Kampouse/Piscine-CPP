#include <iostream>
#include "./Contact.class.hpp"
#include "./PhoneBook.class.hpp"

int main(void)
{
	std::string line;
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
	/*
	if (line  == "debug")
	{
		std::cout  << "debug\n";
		phonebook.addContactDebug();
	}
	*/
	else if (line  == "search")
	{
				phonebook.searchContact(0);
	}
	else if (line  == "exit")
	{
			
			std::cout << "sorry i could not hold your precious data ;( \n";
			return(0);
	}
	else
				std::cout << "\033[2J\033[1;1H"  
						  << "select an option: add, search, exit \n" 
						  << "previous line: "
						  << line 
						  << std::endl;
	}
}
