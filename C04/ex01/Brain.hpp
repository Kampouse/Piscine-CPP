#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string *_ideas;
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		Brain	&operator = (const Brain &copy);
};

#endif
