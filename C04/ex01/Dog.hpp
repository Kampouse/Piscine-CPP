#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include  "./Animal.hpp"
# include  "Brain.hpp"

class Dog: public  Animal  
{
	private:

	Brain *_brain;

	public:
		Dog(std::string);
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		void MakeSound(void)const;
		Dog	&operator = (const Dog &copy);
};
#endif

