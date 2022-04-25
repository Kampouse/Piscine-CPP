#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string *_ideas;
	public:
		Brain(void);
		Brain(std::string name);
		~Brain(void);
		Brain(const Brain &copy);
		Brain	&operator = (const Brain &copy);
		void display_mind(void);
};

#endif
