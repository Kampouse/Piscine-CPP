#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form
{
	class GradeTooHightException : public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception 
	{
		public :
			virtual const char* what() const throw();
	};

	private:
		const std::string _name;
		bool _signed;
		const int _grade_sign;	
		const int _grade_execute;	

	public:
		Form(void);
		Form(std::string name,int grade_exec,int grade_sign);
		~Form(void);
		Form(const Form &copy);
		Form	&operator = (const Form &copy);
		int GetGradeExec(void)const;
		int GetGradeSign(void)const;
		std::string GetName(void)const;
		bool IsSigned(void)const;
		void BeSigned(void);
		void GradeTooHigh(int grade);
		void GradeTooLow(int grade);
};

std::ostream &operator<<(std::ostream &output, Form const &Form);

#endif
