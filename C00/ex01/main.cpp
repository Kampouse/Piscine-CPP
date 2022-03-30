#include <iostream>

#include "./Contact.class.hpp"
#include "./PhoneBook.class.hpp"


int main(void)
{
	//PhoneBook phonebook = PhoneBook("hello");



	// ray[0] = Contact("hellO","last","this","rat","this");
	std::string line;
	// get  user input;
	PhoneBook phonebook ;
	//contact.init_Contact();
	while(1)
	{
	 getline(std::cin,line);
	if (line  == "add")
	{
		std::cout  << "add a user" << std::endl;
		phonebook.addContact();
	}
	if (line  == "search")
	{
		std::cout  << "search a user" << std::endl;
			 getline(std::cin,line);
			 if(line.find_first_not_of("0123456789") == std::string::npos)
			{
				phonebook.searchContact(std::atoi(line.c_str()));
			}
			else
			{
					std::cout << "bro this is not a numbr \n";
			}
	}
	if (line  == "exit")
			break;




	}
	//get_user_info(&ray[0]);
	
	//  book.setPhoneNumber(15);
		//std::cout  << book.PhoneNumber() << std::endl;
	
}

