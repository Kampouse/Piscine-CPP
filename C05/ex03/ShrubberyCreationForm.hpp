#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm :public Form 
{


	public:
		void execute(Bureaucrat const & executeted)const;
		std::string GetName(void)const;
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name);
		void action()const;
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &copy);
};

std::ostream &operator<<(std::ostream &output, ShrubberyCreationForm const &Form);




#endif
