/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:37:54 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/04 15:41:54 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
  class GradeTooHightException : public std::exception 
{
  public:
    virtual const char *what() const throw();
};

  class GradeTooLowException : public std::exception 
 {
  public:
    virtual const char *what() const throw();
  };
  class IsNotSigned : public std::exception
{
  public:
    virtual const char *what() const throw();
};
  class BadCredential : public std::exception
{
  public:
    virtual const char *what() const throw();
};

private:
  const std::string _name;
   bool _signed;
  const int _grade_sign;
  const int _grade_execute;

public:
  Form(void);
  Form(std::string name,int grade_sign, int grade_excec);
 virtual   ~Form(void);
  Form(const Form &copy);
  Form &operator=(const Form &copy);
  int GetGrade(void) const;
  std::string GetName(void) const;
  void execute(Bureaucrat const &executeted) const;
  bool IsSigned(void) const;
  void BeSigned(void);
  const char * GetName(void);
  int getGradeSign() const;
  int getGradeExecute() const;
  void GradeTooHigh(int grade);
  void GradeTooLow(int grade);
  virtual  void action(const Bureaucrat &user)const = 0;
  void Check_status(Bureaucrat const &executeted) const;
};

std::ostream &operator<<(std::ostream &output, Form const &Form);
#endif
