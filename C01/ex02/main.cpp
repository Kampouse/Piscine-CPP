#include <iostream>

int main(void)
{
	std::string str;
	std::string *ptr;
	
	ptr = &str;
	str = "HI THIS is BRAIN";

	std::string& ref = str;
	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl;
	
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	
}
