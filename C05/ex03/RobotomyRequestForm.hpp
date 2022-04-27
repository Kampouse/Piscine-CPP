#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include "Form.hpp"

class RobotomyRequestForm :public Form 
{
	public:
		void execute(Bureaucrat const & executeted)const;
		std::string GetName(void)const;
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string name);
		void action()const;
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm	&operator = (const RobotomyRequestForm &copy);
};

std::ostream &operator<<(std::ostream &output, RobotomyRequestForm const &Form);

#endif




