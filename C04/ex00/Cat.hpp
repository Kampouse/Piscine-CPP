#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include  "Animal.hpp"

class Cat: public  Animal  
{
	public:
		Cat(std::string);
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		void MakeSound(void);
		Cat	&operator = (const Cat &copy);
};
#endif

