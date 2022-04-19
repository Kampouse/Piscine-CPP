/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 07:12:28 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/18 13:01:41 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


Form::Form(const Form &copy):_name(copy.GetName()),_grade_sign(copy.GetGrade()),_grade_execute(copy.GetGrade())
{
	std::cout << "copy called" << std::endl;
}

void Form::GradeTooHighException(int grade)
{
		if( grade < 0)
		 throw std::runtime_error("Grade is too hight\n");

}

void Form::GradeTooLowException(int grade)
{
		if(grade > 150)
			 throw std::runtime_error("Grade tooo low\n");
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
		output  << user.GetName() << " : " << user.GetGrade() << std::endl;
		return (output);
}

