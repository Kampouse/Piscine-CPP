#include <iostream>
#include "./PhoneBook.class.hpp"
#include "./Contact.class.hpp"


PhoneBook::PhoneBook(void)
{
	this->_nbr_of_contact = 0;
	this->_max_contact = 8;
}
void PhoneBook::addContact(void)
{
	
	if (this->_nbr_of_contact < 8)
	this->_nbr_of_contact++;
	else
		_nbr_of_contact = 1;
	this->_contacts[_nbr_of_contact].Contact_darkest_secret();
	this->_contacts[_nbr_of_contact].Contact_firstname();
	this->_contacts[_nbr_of_contact].Contact_lastname();
	this->_contacts[_nbr_of_contact].Contact_nickname();
	this->_contacts[_nbr_of_contact].Contact_phone_number();
}

PhoneBook::~PhoneBook( void )
{


}
int PhoneBook::searchContact(int contact_number)
{
	Contact temp;
	if(contact_number <= this->_nbr_of_contact)
	{
		temp = this->_contacts[contact_number];
		 std::cout << temp.get_phone_number();
	}
	else if (contact_number >  this->_max_contact && contact_number > 0)
		std::cout << "bro there onl contact form  1-8\n";
	else 
		std::cout << "bro nothing found at this 'page' " 
				  << " \n try something else bro" 
				  << std::endl;
	return (0);
}

/*
int main(void)
{
	Contact ray[9];
	// ray[0] = Contact("hellO","last","this","rat","this");
	std::string rat;
	 getline(std::cin,rat);
	//get_user_info(&ray[0]);

	//  book.setPhoneNumber(15);
		//std::cout  << book.PhoneNumber() << std::endl;
	
}
*/
