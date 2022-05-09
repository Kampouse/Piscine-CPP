#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include "stack"

template <typename  T>
class MutantStack : public std::stack<T>
{


	private:
		std::stack<T>  _stack;
public:
		typedef typename std::stack<T>::container_type::iterator iterator;


MutantStack(void)
{
	this->_stack = std::stack<T>(); 

	return ;
}

~MutantStack(void)
{
	std::cout << "MutantStack destructor" << std::endl; 
}

MutantStack(const MutantStack &copy)
{
	*this = copy;
	return ;
}
MutantStack<T>	&operator = (const MutantStack &copy)
{
	if (this != &copy)
	{
		_stack =  copy._stack;
	}
	return *this;
}

  iterator  begin(void)
{
	return this->c.begin();
} 

	   iterator  end(void)
{
	 return this->c.end();
}

};
#endif
