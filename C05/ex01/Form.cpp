#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void):_grade_sign(1),_grade_execute(1)
{
	std::cout << "Constructor called" << std::endl;
}
Form::Form(std::string name,int grade):_name(name),_grade_sign(grade),_grade_execute(grade)
{
	GradeTooHighException(grade);
	GradeTooLowException(grade);
	_signed = false;
	std::cout << "Form was init" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}


void Form::GradeTooHighException(int grade)
{
		if( grade < 0)
		 throw std::runtime_error("Grade is too Hight");

}

void Form::GradeTooLowException(int grade)
{
		if(grade > 150)
			 throw std::runtime_error("Grade tooo low");
}

void Form::BeSigned(void)
{

	_signed = true;
}
bool Form::IsSigned(void)
{
	return _signed;
}
int Form::GetGrade(void)const
{
	return _grade_sign;
}
