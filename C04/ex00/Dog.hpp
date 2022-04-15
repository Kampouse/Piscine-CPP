#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include  "./Animal.hpp"

class Dog: public  Animal  
{
	public:
		Dog(std::string);
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		void MakeSound(void);
		Dog	&operator = (const Dog &copy);
};
#endif

