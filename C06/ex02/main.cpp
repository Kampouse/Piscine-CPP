#include <iostream> 
#include "Base.hpp"
# include "Alpha.hpp" 
# include "Beta.hpp" 
# include "Charlie.hpp"  


Base *random_element(void)
{
Base *ptr;
		srand(time(NULL));
int timed =		rand() ;
	

timed = 	 timed % 3; 
	switch(timed)
	{
		case 0:
		{
			std::cout <<  "expecting ->Alpha"  << std::endl;
			ptr = new Alpha();
			break;
		}
		case 1:
		{

			ptr = new Beta();
			std::cout <<  "expecting ->Beta"  << std::endl;
			break;
		}
		case 2:
		{
			ptr = new Charlie();
			std::cout << "expecting ->Charlie" << std::endl;
			break;
		}
	}
return(ptr);
}
void find_type(Base *elem)
{
	if( dynamic_cast<Alpha*>(elem))
		{
			std::cout << "got-> Alpha" << std::endl;
		}

	else if( dynamic_cast<Beta*>(elem))
		{
			std::cout << "got-> Beta" << std::endl;
		}
	else if( dynamic_cast<Charlie*>(elem))
		{
			std::cout << "got-> Charlie" << std::endl;
		}
	delete elem;
}


void find_type(Base &elem)
{
	std::cout << "should go here"  << std::endl;
	try
	{	
		Alpha* temp;
		temp = 	&dynamic_cast<Alpha&>(elem);
		std::cout << "got -> Alpha" << std::endl;
		delete temp;
		return;
	}
	catch(std::bad_cast & e)
	{}

	try
	{	
		Beta* temp;
 	  temp = &dynamic_cast<Beta&>(elem);
		std::cout << " got -> Beta" << std::endl;
		delete temp;
		return;
	}
	catch(std::bad_cast & e)
	{}
	try
	{	
		Charlie *temp;
		temp = &dynamic_cast<Charlie&>(elem);
		std::cout << " got-> Charlie" << std::endl;
		delete temp;
	}
	catch(std::bad_cast & e)
	{}
	
}

int main(void)
{
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type (random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());
	find_type( *random_element());

}
