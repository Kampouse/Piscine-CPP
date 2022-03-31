#include "Contact.class.hpp"


Contact::Contact()
{

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
			 std::cout << "phone_number: ";
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
		 std::cout << "nickname : ";
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






