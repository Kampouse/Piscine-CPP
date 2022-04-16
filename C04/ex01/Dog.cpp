#include "Dog.hpp"


Dog::Dog(std::string)
{

}
Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
	Animal::type = "dog";
}
Dog::~Dog(void)
{

	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;

}
Dog::Dog(const Dog &copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->_brain = copy._brain;
	this->type = copy.type;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "dogyy assignation operator called" << std::endl;
	type = copy.type;
	_brain = copy._brain;
		return (*this);
}
void Dog::MakeSound(void)const
{
	std::cout << "i  Bark bark\n";
}
