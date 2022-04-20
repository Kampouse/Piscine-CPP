
#include "Bureaucrat.hpp"
#include "ShrubberryCreation.hpp"

ShrubberryCreation::ShrubberryCreation():_grade_sign(72),_grade_execute(45),_name("NO-name-Form")
{
}
ShrubberryCreation::ShrubberryCreation(std::string name):_grade_sign(72),_grade_execute(45),_name(name),_signed(false)
{
	std::cout << "ShrubberryCreation  created" << std::endl;
}

ShrubberryCreation::~ShrubberryCreation(void)
{
	std::cout << "Destructor called" << std::endl;
}

ShrubberryCreation::ShrubberryCreation(const ShrubberryCreation &copy):Form(),_grade_sign(72),_grade_execute(45),_name(copy._name),_signed(copy._signed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ShrubberryCreation	&ShrubberryCreation::operator = (const ShrubberryCreation &copy)
{
	std::cout << "Assignation operator called" << std::endl;
		this->_signed = copy._signed ;
	return (*this);
}
bool ShrubberryCreation :: IsSigned ()const
{
	return _signed;

}
void ShrubberryCreation :: BeSigned() 
{
	_signed = true;
}

int ShrubberryCreation ::GetGrade() const
{
	return _grade_sign ;
}

int ShrubberryCreation ::  getGradeExecute()const
{
	return _grade_execute ;
}

int ShrubberryCreation ::  getGradeSign()const
{
	return _grade_execute ;
}

	std::string ShrubberryCreation::GetName(void)const
{
	return _name;
}

void ShrubberryCreation ::execute(const Bureaucrat  &student)const
{
	this->Check_status(student);
	std::cout <<  student << std::endl;
	std::cout << "should do the good thing if this work" << std::endl;
	//busyness logic to  do the thing asked???
}
std::ostream &operator<<(std::ostream &output, ShrubberryCreation  const &user)
{
		output  << user.GetName() << user.GetGrade();
		return (output);
}
