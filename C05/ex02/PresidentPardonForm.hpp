#ifndef PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>
class PresidentPardonForm :public Form 
{


	public:
		void execute(Bureaucrat const & executeted)const;
		std::string GetName(void)const;
		PresidentPardonForm(void);
		PresidentPardonForm(std::string name);
		void action()const;
		~PresidentPardonForm(void);
		PresidentPardonForm(const PresidentPardonForm &copy);
		PresidentPardonForm	&operator = (const PresidentPardonForm &copy);
};


std::ostream &operator<<(std::ostream &output, PresidentPardonForm const &Form);


#endif

