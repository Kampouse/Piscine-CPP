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
		std::cout << temp.length();
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
		std::cout << temp.length();
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
		std::cout << temp.length();
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
		std::cout << temp.length();
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
		std::cout << temp.length();
		if (temp.length() > 0)
		{
			this->_nickname =  temp;
			return;
		}
		else
			 std::cout << "enter something goddamit: \n";
	}
}
