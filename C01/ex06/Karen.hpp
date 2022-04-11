/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:42:32 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:57:03 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
class Karen
{
	private:
		
		/*private members*/
		 void debug( void );
		 void info( void );
		 void warning( void );
		 void error( void); 
	public:

		Karen(void);
		void complain(std::string);
		~Karen(void);
};

typedef void (Karen::*ptr_funct_karen)(void);
