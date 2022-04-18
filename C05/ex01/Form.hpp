#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form
{
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
		int GetGrade(void)const;
		bool IsSigned(void);
		void BeSigned(void);
		void GradeTooHighException(int grade);
		void GradeTooLowException(int grade);
};

#endif
