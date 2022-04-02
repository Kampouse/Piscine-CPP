/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:05:53 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/02 17:23:17 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:

		std::string _name;
	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void annonce(void);
		void setName(std::string name);

};

Zombie *zombieHorde(int Number,std::string name);
#endif
