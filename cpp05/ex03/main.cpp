/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:10:59 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/06/04 12:48:43 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

//testing form class
int main()
{
	std::cout << "--------------------------------" << std::endl;
	try
	{
		Intern intern;
		AForm *f;
		f = intern.makeForm("PresidentialPardonForm", "target1");
		std::cout << *f;
		Bureaucrat b("b", 3);
		b.incrementGrade();
		std::cout << b;
		b.signForm(*f);
		std::cout << *f;
		b.executeForm(*f);
		f = intern.makeForm("RobotomyRequest", "target2");
		f = intern.makeForm("ShrubberyCreationForm", "target3");
		std::cout << *f;
		Bureaucrat b2("b2", 1);
		std::cout << b2;
		b2.signForm(*f);
		std::cout << *f;
		b2.executeForm(*f);
		b2.incrementGrade();
		std::cout << b2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}