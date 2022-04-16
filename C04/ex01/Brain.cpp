#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "brin builder called" << std::endl;
  _ideas =	new std::string[100];
}

Brain::~Brain(void)
{
	std::cout << " Brain Destructor called" << std::endl;
	delete [] _ideas;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_ideas = copy._ideas;
}

Brain	&Brain::operator = (const Brain &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_ideas = copy._ideas;
	return (*this);
}
