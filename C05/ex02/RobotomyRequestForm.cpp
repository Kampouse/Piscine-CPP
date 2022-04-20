#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():_grade_sign(72),_grade_execute(45),_name("NO-name-Form")
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string name):_grade_sign(72),_grade_execute(45),_name(name),_signed(false)
{
	std::cout << "RobotomyRequestForm  created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):Form(),_grade_sign(72),_grade_execute(45)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_signed = copy._signed;
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
		this->_signed = copy._signed ;
	return (*this);
}
bool RobotomyRequestForm :: IsSigned ()const
{
	return _signed;

}
void RobotomyRequestForm :: BeSigned() 
{
	_signed = true;
}

int RobotomyRequestForm ::GetGrade() const
{
	return _grade_sign ;
}

int RobotomyRequestForm ::  getGradeExecute()const
{
	return _grade_execute ;
}

int RobotomyRequestForm ::  getGradeSign()const
{
	return _grade_execute ;
}

	std::string RobotomyRequestForm::GetName(void)const
{
	return _name;
}

void RobotomyRequestForm ::execute(const Bureaucrat  &student)const
{
	this->Check_status(student);
	std::cout <<  student << std::endl;
	std::cout << "should do the good thing if this work" << std::endl;
	//busyness logic to  do the thing asked???
}


