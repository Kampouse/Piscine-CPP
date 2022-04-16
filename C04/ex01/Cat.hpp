#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include  "Animal.hpp"
# include  "Brain.hpp"

class Cat: public  Animal  
{
	private:
		Brain *_brain;

	public:
		Cat(std::string);
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		void MakeSound(void)const;
		Cat	&operator = (const Cat &copy);
};
#endif

