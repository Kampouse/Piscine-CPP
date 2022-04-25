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
		std::string  GetType(void);
		void MakeSound(void)const;
		Dog	&operator = (const Dog &copy);
};
#endif

