#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP 
# include <iostream>

template<typename T,typename val>
val easyfind(T &container, int value)
{
	typename T::iterator location = std::find(container.begin(), container.end(), value);
	if (location == container.end())
		throw std::exception();
	return *location;
} 

#endif
