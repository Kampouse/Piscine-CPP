/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:58:41 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/18 12:59:21 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name,int grade):_name(name)
{
		GradeTooHight(grade);		
		GradeTooLow(grade);
		_grade = grade;
	std::cout << "Bureaucrat is now born\n";
}

void Bureaucrat::GradeTooHight(int grade)
{
	
		if( grade < 1)
	{
        throw std::runtime_error("grade too high\n");
	}
}

void Bureaucrat::GradeTooLow(int grade)
{
		if( grade > 150)
	{
        throw std::runtime_error("grade too low\n");
	}
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

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_grade  = copy._grade;
	
}

Bureaucrat::Bureaucrat(void):_name("default")
{

}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}

void Bureaucrat::IncrementGrade(void)
{
		GradeTooHight(_grade - 1);
		_grade--;
		std::cout<< GetName() << ": grade Incremented  grade is now at:" << _grade << "\n";
}
 
void Bureaucrat::DecrimentGrade(void)
{
		GradeTooLow(_grade + 1);
		_grade++;
		std::cout << GetName() <<  ": grade Decriment  grade is now at:" << _grade << "\n";
}
void Bureaucrat::SignForm(Form  &exam)
{
	if(this->GetGrade() <= exam.GetGrade())
	{
		std::cout << " form was signed ";
		exam.BeSigned();
	}
	else
		std::cout << "could not write form \n";

}
std::ostream &operator<<(std::ostream &output, Bureaucrat const &user)
{
		output  << user.GetName() << " : " << user.GetGrade() << std::endl;
		return(output);
}

