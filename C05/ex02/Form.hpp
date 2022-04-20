/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:37:54 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/20 06:27:35 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form
{
	class GradeTooHightException : public std::exception 
	{
				public :
					virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception 
	{
				public :
					virtual const char* what() const throw();
	};
	class IsNotSigned: public std::exception 
	{
				public :
					virtual const char* what() const throw();
	};
	class BadCredential: public std::exception 
	{
				public :
					virtual const char* what() const throw();
	};

	private:
	const std::string _name;
	bool _signed;
	const int _grade_sign;	
	const int _grade_execute;	

	public:
		Form(void);
		Form(std::string name,int grade);
		~Form(void);
		Form(const Form &copy);
		Form	&operator = (const Form &copy);
		virtual	int GetGrade(void)const = 0;
		virtual std::string GetName(void)const;
		virtual void execute(Bureaucrat const & executeted)const;
		virtual bool IsSigned(void)const;
		virtual void BeSigned(void);
		virtual int getGradeSign()const;
		virtual int getGradeExecute()const;
		void GradeTooHigh(int grade);
		void GradeTooLow(int grade);
		void Check_status( Bureaucrat const & executeted)const;
};
std::ostream &operator<<(std::ostream &output, Form const &Form);
#endif
