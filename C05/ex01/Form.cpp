/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 07:12:28 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/09 15:26:28 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void):_grade_sign(1),_grade_execute(1)
{
	_signed = false;
	std::cout << "Form Constructor Called " << std::endl;
}
Form::Form(std::string name,int grade_exec,int grade_sign):_name(name),_grade_sign(grade_sign),_grade_execute(grade_exec)
{
	GradeTooLow(grade_sign);
	GradeTooHigh(grade_sign);
	GradeTooLow(grade_exec);
	GradeTooHigh(grade_exec);
	_signed = false;
	std::cout << "Form  Constructor  Called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}


Form::Form(const Form &copy):_name(copy.GetName()),_grade_sign(copy.GetGradeSign()),_grade_execute(copy.GetGradeExec())
{
	std::cout << "copy called" << std::endl;
}

 const char *Form::GradeTooHightException::what() const throw()
{
	return ("Grade too  high in the form\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade too high in the form\n");
}
void  Form::GradeTooHigh(int grade)
{
		if (grade < 1)
			throw GradeTooHightException();
}
void  Form::GradeTooLow(int grade)
{
		if (grade > 150)
			throw GradeTooLowException();
}
void Form::BeSigned(void)
{
	_signed = true;
}
bool Form::IsSigned(void)const
{
	return _signed;
}
int Form::GetGradeExec(void)const
{
	return _grade_execute;
}

std::string Form::GetName(void)const
{
	return _name;
}

int Form::GetGradeSign(void)const
{
	return _grade_sign;
}

Form	&Form::operator = (const Form &copy)
{
	std::cout << " Cat Assignation operator called" << std::endl;
	this->_signed =  copy._signed;
		return (*this);
}

std::ostream &operator<<(std::ostream &output, Form const &user)
{
		output  << user.GetName() <<": Grade : grade to exec: " << user.GetGradeExec() <<  "Grade to Sign: " << user.GetGradeSign() 
				<<" Signed :"	  <<(user.IsSigned() == true ? " Yes":" No")  << std::endl;
		return (output);
}
