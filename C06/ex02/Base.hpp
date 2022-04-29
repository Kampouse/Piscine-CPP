#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
class Base
{
	private:
	std::string elem;
	public:
		Base(void);
		virtual ~Base(void);
		Base(const Base &copy);

		Base	&operator = (const Base &copy);
};

#endif
