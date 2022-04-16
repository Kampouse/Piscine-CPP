#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		const std::string grade;

	public:
		void setName(const std::string name);
		Bureaucrat(void);
		Bureaucrat(int grade,std::string name);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator = (const Bureaucrat &copy);
};

#endif
