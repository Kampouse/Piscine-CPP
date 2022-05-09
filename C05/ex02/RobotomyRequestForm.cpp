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

void RobotomyRequestForm::action(const Bureaucrat &user)const
{
	std::srand(time(NULL));
	(void)user;
	int  random = std::rand()  % 100; 
	std::cout << "RobotomyRequestForm as been excuted..." << std::endl;
	std::cout << "brrrrrrrrrrrrrrrrrr..." << std::endl;
	if(random  >= 50)
		std::cout << this->GetName() <<  ": i am a robot..." << std::endl;
	else
		std::cout << "failed to initialise the zig stage 3 compiler... YOUR ARE NOT A ROBOT: " << this->GetName()  << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):Form(copy)
{
	std::cout << "RobotomyRequestForm  copy called" << std::endl;
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
		Form::operator=(copy);
	return (*this);
}
void RobotomyRequestForm ::execute(const Bureaucrat  &student)const
{
	this->Check_status(student);
	this->action(student);
}

std::string RobotomyRequestForm ::GetName (void)const
{
	return  Form::GetName();
}

std::ostream &operator<<(std::ostream &output, RobotomyRequestForm  const &user)
{
		output  << user.GetName() << user.GetGrade();
		return (output);
}
