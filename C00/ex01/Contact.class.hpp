#include <iostream>
#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

class Contact {       

	private:
		 
	std::string _darkest_secret ;
	std::string _firstname ;
	std::string _lastname ;
	std::string _nickname ;
	std::string _phone_number ;

  public:             
	 Contact(void);

	void Contact_firstname(void);
	void Contact_lastname(void);
	void Contact_nickname(void);
	void Contact_phone_number(void);
	void Contact_darkest_secret(void);
	 std::string get_firstname(void);
	 std::string get_lastname(void);
	 std::string get_nickname(void);
	 std::string get_phone_number(void);
	 std::string get_darkest_secret(void);

;
};
#endif /* __CONTACT_H__ */
/*  first name, last name, nickname, phone number, and darkest secret */
