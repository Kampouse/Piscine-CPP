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
	Contact  contact;
	
	contact.Contact_firstname();
	contact.Contact_lastname();
	contact.Contact_nickname();
	contact.Contact_phone_number();
	contact.Contact_darkest_secret();
	this->_contacts[this->_nbr_of_contact % this->_max_contact] = contact;
}

PhoneBook::~PhoneBook( void )
{





}
int PhoneBook::searchContact(int contact_number)
{
	if(contact_number <= this->_nbr_of_contact)
	{

	}
	else if(contact_number >  this->_max_contact)
		std::cout << "bro there only 8 contact\n";
	else 
		std::cout << "bro nothing found \n";
	return(0);
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
