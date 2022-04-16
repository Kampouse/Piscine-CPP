#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade,std::string name):name(name)
{

	std::cout << grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}
