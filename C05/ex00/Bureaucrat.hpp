#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <type_traits>

class Bureaucrat
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
		int _grade;
	public:
		void setName(const std::string name);
		Bureaucrat(void);
		Bureaucrat(std::string name,int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		void GradeTooLow(int grade );
		void GradeTooHight(int grade);
		int GetGrade(void)const;
		void IncrementGrade(void);
		void DecrimentGrade(void);
	const std::string GetName(void)const;
		Bureaucrat	&operator = (const Bureaucrat &copy);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &Bureaucrat);
#endif
