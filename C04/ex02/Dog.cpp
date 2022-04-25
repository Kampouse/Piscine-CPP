#include "Dog.hpp"
#include "Brain.hpp"


Dog::Dog(std::string)
{
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
	Animal::type = "dog";
}
Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain("hello");
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
	this->_brain = new Brain(*copy._brain);
	this->type = copy.type;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "dogyy assignation operator called" << std::endl;
	type = copy.type;
	delete _brain;
	_brain = new Brain(*copy._brain);
		return (*this);
}
void Dog::MakeSound(void)const
{
	std::cout << "I AM DOG DONT LISTEN TO ME\n";
}
