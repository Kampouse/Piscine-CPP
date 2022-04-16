/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/16 18:32:06 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int AddPositiveIntegers(int a, int b)
{
    if (a < 0 || b < 0)
        throw std::invalid_argument("AddPositiveIntegers arguments must be positive");

    return (a + b);
}

int main()
{
    try
    {
		std::cout << AddPositiveIntegers(-1, 2);
    }

    catch (std::invalid_argument& e)
    {
		std::cerr << e.what() << std::endl;
        return -1;
    }

    return 0;
}
