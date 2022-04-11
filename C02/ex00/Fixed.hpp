/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:06:27 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 20:12:27 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	static const int fractional_byte;
	private:
			int _FixedPointNumber;
			/*private members*/
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed	&operator = (const Fixed &copy);
};

#endif
