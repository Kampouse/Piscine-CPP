#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include  "Animal.hpp"

class Cat: public  Animal  
{
	private:
		


	public:
		Cat(std::string);
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		std::string GetType(void);
		void MakeSound(void)const;
		Cat	&operator = (const Cat &copy);
};
#endif

