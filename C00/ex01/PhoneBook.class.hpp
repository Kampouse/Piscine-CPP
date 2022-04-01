#include <iostream>
#include "Contact.class.hpp"
#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__


class PhoneBook {

public:

	typedef PhoneBook		t;
	 PhoneBook(void);
	~PhoneBook( void );
	 void	addContact( void );
	 void	addContactDebug(void);
	 int searchContact(int contact_number);
private:

	 int		_max_contact;
	 int		_nbr_of_contact;
	 int		_iterator;
	 Contact	_contacts[9];
	static void	_displayTimestamp( void );
};



#endif /* __ACCOUNT_H__ */

