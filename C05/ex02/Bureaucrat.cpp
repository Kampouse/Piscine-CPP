/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:58:41 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/04 16:15:47 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name,int grade):_name(name),_grade(grade)
{
		GradeTooHight(grade);		
		GradeTooLow(grade);
	std::cout << "Bureaucrat is now born\n";
}

const std::string Bureaucrat::GetName(void) const
{
	return _name;
}
 int Bureaucrat::GetGrade(void)const
{
	return _grade;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy._name),_grade(copy._grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(void):_name("default"),_grade(1)
{
	std::cout << "default constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}

 const char *Bureaucrat::GradeTooHightException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void Bureaucrat::GradeTooHight(int grade)
{
		if ( grade < 1)
	{
		 throw Bureaucrat::GradeTooHightException();
	}
}

void Bureaucrat::GradeTooLow(int grade)
{
		if( grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::SignForm(Form  &exam)
{

	if (this->GetGrade() <= exam.GetGrade())
	{
		std::cout << "this form is being signed ->" << exam << std::endl;
		exam.BeSigned();
	}
	else
		std::cout << "could not write form because " << this->GetName() << " as only: " << this->GetGrade() << " when " << exam.getGradeSign() << " is required" << std::endl;
}

void Bureaucrat::executeForm(Form const & exam)
{
	try 
	{
		exam.Check_status(*this);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what(); return;
	}
		exam.action(*this);
}

std::ostream &operator<<(std::ostream &output,  Bureaucrat const  &user)
{
		output  << user.GetName() << " : " << user.GetGrade();
		return (output);
}
