#include "Animal.hpp"

Animal::Animal(std::string)
{

}
Animal::Animal(void)
{
	std::cout << "Animal constructor called\n";
}
Animal::~Animal(void)
{

	std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator = (const Animal &copy)
{
	type = copy.type;
	std::cout << "Animal operator called" << std::endl;

		return (*this);
}
		void Animal::MakeSound(void)const
{
		if(type ==  "dog")
			std::cout << "THIS OBJECT MUST BE AA \"WOOF \",ah! dog!\n";
		else if (type ==  "cat")
			std::cout << "where did   this ... \"MEOW\" NORMINETTE GO! COME BACK!\n";
	return;
}
