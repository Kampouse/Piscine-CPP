/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:18:42 by jemartel          #+#    #+#             */
/*   Updated: 2022/05/02 19:18:43 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename T>
 void swap(T &val,T &valb)
{
	T temp;
	temp = valb;
	valb = val;
	val = temp;	
}
template<typename T>
 T min(T &val,T &valb)
{
	return(val < valb? val:valb);
}

template<typename T>
 T max(T &val,T &valb)
{
	return(val > valb? val:valb);
}
#endif

