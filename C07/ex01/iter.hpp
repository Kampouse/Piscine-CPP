#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>


template<typename T>
void generic_inc(T &val)
{
	val *= 10;
}
template<typename T>
 void iter(T *value,int count,void(*fn_ptr)(T &val))
{
	int inc;	
		inc = 0;
		while(inc != count)
	{
			(fn_ptr)(value[inc]);
		inc++;
	}
}
#endif

