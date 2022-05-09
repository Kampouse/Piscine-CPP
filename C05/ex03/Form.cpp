/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 07:12:28 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/09 15:10:03 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void):_grade_sign(1),_grade_execute(1)
{
	std::cout << "Constructor called" << std::endl;
}
Form::Form(std::string name,int grade_sign, int grade_excec):_name(name),_grade_sign(grade_sign),_grade_execute(grade_excec)
{
	GradeTooHigh(grade_excec);
	GradeTooLow(grade_excec);
	GradeTooHigh(grade_sign );
	GradeTooLow(grade_sign);
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

 const char *Form::GradeTooHightException::what() const throw()
{
	return ("Grade too  high in the form\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low in the form\n");
}
const char *Form::IsNotSigned::what() const throw()
{
	return ("Sorry ty again later this form is not signed\n");
}
const char *Form::BadCredential::what() const throw()
{
	return ("wrong credential\n");
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
int Form::GetGrade(void)const
{
	return _grade_sign;
}
int Form::getGradeSign (void)const
{
	return _grade_sign;
}
int Form::getGradeExecute(void)const
{
	return _grade_execute;
}
void Form::execute(Bureaucrat const & executeted)const
{
	(void)executeted;
}

std::string Form::GetName(void)const
{
	return _name;
}
Form	&Form::operator = (const Form &copy)
{
	std::cout <<  "Form Assignation operator called" << std::endl;
	this->_signed =  copy._signed;
		return (*this);
}

void Form::Check_status( Bureaucrat const &student)const
{
	if ( this->getGradeExecute() >= student.GetGrade() && this->getGradeSign() >= student.GetGrade())
	{
			if(this->IsSigned() == true)
				return;
			else
				throw IsNotSigned();
	}
	else 
		throw BadCredential();
}

std::ostream &operator<<(std::ostream &output, Form const &user)
{
		output  << user.GetName() << " : " << user.GetGrade();
		return (output);
}

