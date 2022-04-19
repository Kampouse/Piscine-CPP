/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:25:16 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/19 00:47:05 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "cstring"

void grading(Bureaucrat *user, std::string str) {
  if (str == "inc")
    while (1) {
      user->IncrementGrade();
    }
  if (str == "dec")
    while (1) {
      user->DecrimentGrade();
    }
}

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
  Bureaucrat john("john", 20);
  RobotomyRequestForm hello("hello");
  john.SignForm(hello);
  john.executeForm(hello);
  return (0);
}
