/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 07:48:25 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/16 15:36:18 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
		public:
		WrongCat();	
		~WrongCat();	
		WrongCat(const WrongCat &copy);	
		WrongCat	&operator = (const WrongCat &copy);
		void MakeSound(void)const;
};
