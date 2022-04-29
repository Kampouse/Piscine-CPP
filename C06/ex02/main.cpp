#include <iostream> 
#include "Base.hpp"
# include "Alpha.hpp" 
# include "Beta.hpp" 
# include "Charlie.hpp"  


Base *random_element(void)
{
Base *ptr;
int timed = 	time(NULL);
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
			return;
		}

	else if( dynamic_cast<Beta*>(elem))
		{
			std::cout << "got-> Beta" << std::endl;
			return;
		}
	else if( dynamic_cast<Charlie*>(elem))
		{
			std::cout << "got-> Charlie" << std::endl;
			return;
		}
	delete elem;
}


void find_type(Base &elem)
{
	try
	{	
 	 (void)dynamic_cast<Alpha&>(elem);
		std::cout << "Alpha" << std::endl;
		return;
	}
	catch(std::bad_cast & e)
	{}

	try
	{	
 	 (void)dynamic_cast<Beta&>(elem);
		std::cout << "Beta" << std::endl;
		return;
	}
	catch(std::bad_cast & e)
	{}
	try
	{	
 	 (void)dynamic_cast<Charlie&>(elem);
		std::cout << "Charlie" << std::endl;
	}
	catch(std::bad_cast & e)
	{}

}


int main(void)
{
	find_type (random_element());
	find_type (*random_element());


}
