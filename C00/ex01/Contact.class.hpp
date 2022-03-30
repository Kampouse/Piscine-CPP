#include <iostream>
#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

class Contact {       

	private:
		 
	std::string _firstname ;
	std::string _lastname ;
	std::string _nickname ;
	std::string _phone_number ;
	std::string _darkest_secret ;

  public:             
	 Contact(void);

	void Contact_firstname(void);
	void Contact_lastname(void);
	void Contact_nickname(void);
	void Contact_phone_number(void);
	void Contact_darkest_secret(void);

;
};
#endif /* __CONTACT_H__ */
/*  first name, last name, nickname, phone number, and darkest secret */
