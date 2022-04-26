/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 07:12:28 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/26 14:37:48 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void):_grade_sign(1),_grade_execute(1)
{
	_signed = false;
	std::cout << "Form Constructor Called " << std::endl;
}
Form::Form(std::string name,int grade):_name(name),_grade_sign(grade),_grade_execute(grade)
{
	GradeTooLow(grade);
	GradeTooHigh(grade);
	_signed = false;
	std::cout << "Form  Constructor  Called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}


Form::Form(const Form &copy):_name(copy.GetName()),_grade_sign(copy.GetGrade()),_grade_execute(copy.GetGrade())
{
	std::cout << "copy called" << std::endl;
}

 const char *Form::GradeTooHightException::what() const throw()
{
	return ("Grade too  high in the form");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low in the form");
}
void  Form::GradeTooHigh(int grade)
{
		if (grade < 1)
			throw GradeTooHightException();
}
void  Form::GradeTooLow(int grade)
{
		if (grade > 150)
			throw GradeTooHightException();
}
void Form::BeSigned(void)
{
	_signed = true;
}
bool Form::IsSigned(void)const
{
	return _signed;
}
int Form::GetGrade(void)const
{
	return _grade_sign;
}

std::string Form::GetName(void)const
{
	return _name;
}
Form	&Form::operator = (const Form &copy)
{
	std::cout << " Cat Assignation operator called" << std::endl;
	this->_signed =  copy._signed;
		return (*this);
}

std::ostream &operator<<(std::ostream &output, Form const &user)
{
		output  << user.GetName() <<": Grade : " << user.GetGrade() <<" : " <<" Signed :"<<(user.IsSigned() == true ? " Yes":" No")  << std::endl;
		return (output);
}
