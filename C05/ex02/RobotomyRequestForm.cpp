#include "Form.hpp"

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("Uknown form",72,45)
{

	std::cout << "default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string name):Form(name,72,45)
{
	std::cout << "RobotomyRequestForm  created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

void RobotomyRequestForm::action()
{
	std::cout << "Destructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):Form(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
		Form::operator=(copy);
	return (*this);
}
void RobotomyRequestForm ::execute(const Bureaucrat  &student)const
{
	this->Check_status(student);
	std::cout <<  student << std::endl;
	std::cout << "should do the good thing if this work" << std::endl;
	//busyness logic to  do the thing asked???
}

std::string RobotomyRequestForm ::GetName (void)const
{
	return  Form::GetName();
	//busyness logic to  do the thing asked???
}

std::ostream &operator<<(std::ostream &output, RobotomyRequestForm  const &user)
{
		output  << user.GetName() << user.GetGrade();
		return (output);
}
