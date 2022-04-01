#include "Contact.class.hpp"


Contact::Contact()
{

}
/* this only at  a test  constructor */
Contact::Contact(std::string darkest_secret,
				 std::string firstname,
				 std::string lastname,
				 std::string nickname,
				 std::string phone_number)
{
			this->_darkest_secret  = darkest_secret;
			this->_firstname = firstname;
			this-> _lastname = lastname;
			this-> _nickname = nickname;
			this-> _phone_number  = phone_number;
}

void Contact::Contact_firstname()
{
	std::string temp;
	 while(1)
	{
		 std::cout << "firstname: ";
		 getline(std::cin,temp);
		if (temp.length() > 0)
		{
			this->_firstname =  temp;
			return;
		}
		else
			 std::cout << "enter something goddamit: \n";
	}
}

void Contact::Contact_lastname()
{
	std::string temp;
 while(1)
	{
		 std::cout << "lastname: ";
		 getline(std::cin,temp);
		if (temp.length() > 0)
		{
			this->_lastname =  temp;
			return;
		}
		else
			 std::cout << "enter something goddamit: \n";
	}
}

void Contact::Contact_phone_number()
{
	std::string temp;
 while(1)
	{
		 std::cout << "phone_number: ";
		 getline(std::cin,temp);
		if (temp.length() > 0)
		{
			this->_phone_number =  temp;
			return;
		}
		else
			 std::cout << "enter something goddamit: \n";
	}
}

void Contact::Contact_darkest_secret()
{
	std::string temp;
	 while(1)
		{
			 std::cout << "darkest secret: ";
			 getline(std::cin,temp);
			if (temp.length() > 0)
			{
				this->_darkest_secret =  temp;
				return;
			}
			else
				 std::cout << "enter something goddamit: \n";
		
		}
	}
void Contact::Contact_nickname()
{
	std::string temp;
 while(1)
	{
		 std::cout << "nickname: ";
		 getline(std::cin,temp);
		if (temp.length() > 0)
		{
			this->_nickname =  temp;
			return;
		}
		else
			 std::cout << "enter something goddamit: \n";
	}
}


std::string	Contact:: get_firstname(void)
{
	return ( this->_firstname);
}

	std::string Contact:: get_nickname(void)
{
	return ( this->_nickname);
}
	std::string Contact:: get_lastname(void)
{
	return ( this->_lastname);
}
	std::string Contact:: get_phone_number(void)
{
	return ( this->_phone_number);
}
	std::string Contact:: get_darkest_secret(void)
{
	return ( this->_darkest_secret);
}

std::string	Contact:: get_firstname(bool state)
{
	if(state == true && this->get_firstname().length() > 9)
			return ( (this->_firstname.substr(0,9)).append("."));
	else
		return ( this->_firstname);
}
std::string	Contact:: get_nickname(bool state)
{
	if(state == true && this->get_nickname().length() > 9)
			return ( (this->_nickname.substr(0,9)).append("."));
	else
		return (this->_nickname);
}
std::string	Contact:: get_lastname(bool state)
{
	if(state == true && this->get_lastname().length() > 9)
			return ( (this->_lastname.substr(0,9)).append("."));
	else
		return (this->_lastname);
}

void  Contact::display_internal(void)
{
			std::cout << "Firstname:" <<		Contact::get_firstname() << std::endl;
			std::cout << "lastname:" <<			Contact::get_lastname() << std::endl;
			std::cout << "Nickname:" <<			Contact::get_nickname() << std::endl;
			std::cout << "phone number:" <<		Contact::get_phone_number() << std::endl;
			std::cout << "darkest secret:" <<	Contact::get_darkest_secret() << std::endl;
}
