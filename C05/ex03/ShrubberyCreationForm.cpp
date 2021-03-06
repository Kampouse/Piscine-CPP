/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 02:50:36 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/09 15:16:42 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "fstream"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("Uknown form",145,137)
{

	std::cout << "default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):Form(name,145,137)
{
	std::cout << "ShrubberyCreationForm constructor  created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ShrubberyCreationForm::action()const
{
 // should you catch the excption if it cant open a file?
	std::fstream output;
	const std::string  Name = GetName() + "_Shrubbery";
	output.open(Name.c_str() ,std::ios::out);
	if (output.fail())
	{
		std::cerr << "Error occured" << std::endl;
		return;
	}
	output << "        >X<"<<std::endl;
	output << "         A"<<std::endl;
	output << "        d$b"<<std::endl;
	output << "      .d\\$$b."<<std::endl;
	output << "    .d$i$$\\$$b."<<std::endl;
	output << "       d$$@b"<<std::endl;
	output << "      d\\$$$ib"<<std::endl;
	output << "    .d$$$\\$$$b"<<std::endl;
	output << "  .d$$@$$$$\\$$ib."<<std::endl;
	output << "      d$$i$$b"<<std::endl;
	output << "     d\\$$$$@$b"<<std::endl;
	output << "  .d$@$$\\$$$$$@b."<<std::endl;
	output << ".d$$$$i$$$\\$$$$$$b."<<std::endl;
	output << "        ###"<<std::endl;
	output << "        ###"<<std::endl;
	output << "        ### mh"<<std::endl;
	output << ""<<std::endl;
	output.close();
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	std::cout << "Assignation operator called" << std::endl;
		Form::operator=(copy);
	return (*this);
}
void ShrubberyCreationForm ::execute(const Bureaucrat  &student)const
{
	this->Check_status(student);
	std::cout <<  student << std::endl;
	std::cout << "should do the good thing if this work" << std::endl;
}

std::string ShrubberyCreationForm ::GetName (void)const
{
	return  Form::GetName();
}

std::ostream &operator<<(std::ostream &output, ShrubberyCreationForm  const &user)
{
		output  << user.GetName() << user.GetGrade();
		return (output);
}
