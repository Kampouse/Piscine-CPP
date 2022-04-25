/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 07:48:25 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/24 17:00:24 by jemartel         ###   ########.fr       */
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

		std::string	 GetType(void);
		void MakeSound(void)const;
};
