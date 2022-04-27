#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include "cstring"
class Intern {
 private:
 public:
	  Intern(void);
	 ~Intern(void);
	Form *makeForm(std::string first,std::string second);
};
#endif
