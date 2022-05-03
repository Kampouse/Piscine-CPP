/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:31:50 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/03 16:05:01 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm():Form("Uknown form",25,5)
{

	std::cout << "default constructor called" << std::endl;
}
PresidentPardonForm::PresidentPardonForm(std::string name):Form(name,25,5)
{
	std::cout << "PresidentPardonForm  created" << std::endl;
}

PresidentPardonForm::~PresidentPardonForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

void PresidentPardonForm::action()const
{
	std::cout << "You have been pardoned by Zaphod Beeblebrox"<< std::endl;
}
PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm &copy):Form(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

PresidentPardonForm	&PresidentPardonForm::operator = (const PresidentPardonForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
		Form::operator=(copy);
	return (*this);
}
void PresidentPardonForm ::execute(const Bureaucrat  &student)const
{
	this->Check_status(student);
}

std::string PresidentPardonForm ::GetName (void)const
{
	return  Form::GetName();
	//busyness logic to  do the thing asked???
}

std::ostream &operator<<(std::ostream &output, PresidentPardonForm  const &user)
{
		output  << user.GetName() << user.GetGrade();
		return (output);
}
