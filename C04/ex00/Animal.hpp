#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(std::string);
		Animal(void);
		~Animal(void);
		Animal(const Animal &copy);
		Animal	&operator = (const Animal &copy);
		void MakeSound(void)const;
};
#endif
