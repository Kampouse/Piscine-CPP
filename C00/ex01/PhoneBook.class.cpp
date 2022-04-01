#include <iostream>
#include <string>
#include <iomanip>
#include "./PhoneBook.class.hpp"
#include "./Contact.class.hpp"


PhoneBook::PhoneBook(void)
{
	this->_nbr_of_contact = 0;
	this->_iterator = 0;
	this->_max_contact = 8;
}
void PhoneBook::addContact(void)
{
	if (this->_nbr_of_contact < 8)
	this->_nbr_of_contact++;
	if (this->_iterator < 8)
	this->_iterator++;
	else
		_iterator = 1;
	this->_contacts[_iterator].Contact_firstname();
	this->_contacts[_iterator].Contact_lastname();
	this->_contacts[_iterator].Contact_nickname();
	this->_contacts[_iterator].Contact_phone_number();
	this->_contacts[_iterator].Contact_darkest_secret();
}
void PhoneBook::addContactDebug(void)
{
	if (this->_nbr_of_contact < 8)
	this->_nbr_of_contact++;
	if (this->_iterator < 8)
	this->_iterator++;
	else
		_iterator = 1;
	 this->_contacts[_iterator] = Contact("thisassheointeoiashnoietnasheooihasntoieashneoshtashtneoistneoi","shoietnasoishtneashtneashtneneoiasneoiashtineoasht","rat","oof","doge");
	 
	 int count;
	 Contact temp;
	 count = 1;
		while(count <= this->_max_contact)
	{
		temp = this->_contacts[count];
		 std::cout << std::right <<   '|' << std::setw(2)  << count << std::right  << std::setw(2);
		 std::cout << std::right <<   '|' << std::setw(10)  << temp.get_firstname(true);
		 std::cout << std::right <<   '|' << std::setw(10)  << temp.get_lastname(true);
		 std::cout << std::right <<   '|' << std::setw(10)  << temp.get_nickname(true)  << '|' << std::endl;
		 count++;
	}
}
PhoneBook::~PhoneBook( void )
{



}
int PhoneBook::searchContact(int contact_number)
{
	Contact temp;
	std::string line;	
	int count = 1;
	if (this->_nbr_of_contact == 0)
	{
			std::cout << "bro no contact(s) found" << std::endl;	
			return(0);
	}
		 std::cout << std::right <<   '|' << std::setw(2)  << "index" << std::right  << std::setw(2);
		 std::cout << std::right <<   '|' << std::setw(10)  << "first_name";
		 std::cout << std::right <<   '|' << std::setw(10)  << "last_name";
		 std::cout << std::right <<   '|' << std::setw(10)  << "nick_name"  << '|' << std::endl;

		while(count <= this->_max_contact)
	{
		temp = this->_contacts[count];
		 std::cout << std::right <<   '|' << std::setw(2)  << count << std::right  << std::setw(2);
		 std::cout << std::right <<   '|' << std::setw(10)  << temp.get_firstname(true);
		 std::cout << std::right <<   '|' << std::setw(10)  << temp.get_lastname(true);
		 std::cout << std::right <<   '|' << std::setw(10)  << temp.get_nickname(true)  << '|' << std::endl;
		 count++;
	}
	
		std::cout << "enter a number ->> ";
		std::cin >> line;
		 if (line.find_first_not_of("12345678") == std::string::npos)
		{
					contact_number = std::stoi(line);	
				if(contact_number > 8)
					std::cout << "cant do that" << std::endl;
				else	
			{
					std::cout << "here what you wanted: "  << std::endl;
					this->_contacts[contact_number].display_internal();
			}
		}
		else
			std::cout << "sorry  you cant read that page";	

	std::cin.get();
	return (0);
}
