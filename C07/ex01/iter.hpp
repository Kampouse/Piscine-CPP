/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:18:57 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/02 19:20:41 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>


template<typename T>
void generic_inc(T &val)
{
	val -= 32;
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

