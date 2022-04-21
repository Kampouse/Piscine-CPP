#include "ShrubberyCreationForm.hpp"

#include "Form.hpp"
ShrubberyCreationForm::ShrubberyCreationForm():Form("Uknown form",72,45)
{

	std::cout << "default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name):Form(name,72,45)
{
	std::cout << "ShrubberyCreationForm  created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ShrubberyCreationForm::action()const
{

std::cout << "        >X<"<<std::endl;
std::cout << "         A"<<std::endl;
std::cout << "        d$b"<<std::endl;
std::cout << "      .d\\$$b."<<std::endl;
std::cout << "    .d$i$$\\$$b."<<std::endl;
std::cout << "       d$$@b"<<std::endl;
std::cout << "      d\\$$$ib"<<std::endl;
std::cout << "    .d$$$\\$$$b"<<std::endl;
std::cout << "  .d$$@$$$$\\$$ib."<<std::endl;
std::cout << "      d$$i$$b"<<std::endl;
std::cout << "     d\\$$$$@$b"<<std::endl;
std::cout << "  .d$@$$\\$$$$$@b."<<std::endl;
std::cout << ".d$$$$i$$$\\$$$$$$b."<<std::endl;
std::cout << "        ###"<<std::endl;
std::cout << "        ###"<<std::endl;
std::cout << "        ### mh"<<std::endl;
std::cout << ""<<std::endl;
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
	//busyness logic to  do the thing asked???
}

std::string ShrubberyCreationForm ::GetName (void)const
{
	return  Form::GetName();
	//busyness logic to  do the thing asked???
}

std::ostream &operator<<(std::ostream &output, ShrubberyCreationForm  const &user)
{
		output  << user.GetName() << user.GetGrade();
		return (output);
}
