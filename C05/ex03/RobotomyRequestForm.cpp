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

void RobotomyRequestForm::action()const
{
	std::srand(time(NULL));
	int  random = std::rand()  % 100; 
	std::cout << "RobotomyRequestForm as been excuted..." << std::endl;
	std::cout << "brrrrrrrrrrrrrrrrrr..." << this->GetName() << std::endl;
	if(random  >= 50)
		std::cout << "i am a robot..." << std::endl;
	else
		std::cout << "failed to initialise the zig stage 3 compiler... YOUR ARE NOT A ROBOT" << std::endl;
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
	std::cout <<  student << std::endl;
	this->action();
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
