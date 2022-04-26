#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain builder called" << std::endl;
  _ideas =	new std::string[100];

}
Brain::Brain(std::string name)
{
	int temp;
	std::cout << "Brain builder called" << std::endl;
  _ideas =	new std::string[100];
  temp = 0;
  while(temp != 100)
	{
		_ideas[temp] = name;
		temp++;
	}
}

Brain::~Brain(void)
{
	std::cout << " Brain Destructor called" << std::endl;
	delete [] _ideas;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	int temp;
	temp = 0;
	this->_ideas = new std::string[100];
	while(temp != 100)
	{
		this->_ideas[temp] = copy._ideas[temp];
		temp++;
	}
}

Brain	&Brain::operator = (const Brain &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_ideas = copy._ideas;
	return (*this);
}
void Brain::display_mind(void)
{
	int temp = 0;
	while(temp != 100)
	{
		std::cout << _ideas[temp] << std::endl;
		temp++;
	}
}
