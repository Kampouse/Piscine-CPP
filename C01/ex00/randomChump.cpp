/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:46:02 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/10 15:46:04 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void random_chump(std::string name)
{
Zombie  random_chumps =  Zombie(name); 
	random_chumps.annonce();
}
