#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include "Form.hpp"

class RobotomyRequestForm :public Form 
{
	private:
		const int _grade_sign;	
		const int _grade_execute;	
		const std::string _name;	
		bool _signed;
	public:
		bool IsSigned()const;
		int getGradeSign()const;
		int getGradeExecute()const;

		void BeSigned();
		int GetGrade() const;

		void execute(Bureaucrat const & executeted)const;
		std::string GetName(void)const;
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string name);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm	&operator = (const RobotomyRequestForm &copy);
};
#endif
