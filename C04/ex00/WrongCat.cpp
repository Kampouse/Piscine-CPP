#include "WrongCat.hpp"


WrongCat::WrongCat(void)
{
	std::cout << "Wrongcat constructor called\n";
	WrongAnimal::type = "wrongcat";
}
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called\n";
}




WrongCat::WrongCat(const WrongCat &copy): WrongAnimal()
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = type;
	*this = copy;
}

WrongCat	&WrongCat::operator = (const WrongCat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type  =  copy.type;
		return (*this);
}
	std::string  WrongCat::GetType(void)
{
	return(this-> type);
}
