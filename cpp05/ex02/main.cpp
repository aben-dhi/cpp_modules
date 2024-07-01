/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:10:59 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/06/04 12:42:34 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//testing form class
int main()
{
	std::cout << "--------------------------------" << std::endl;
	// AForm f("f", 1, 1);
	//test PresidentialPardonForm
	try
	{
		Bureaucrat b("b", 3);
		b.decrementGrade();
		std::cout << b;
		PresidentialPardonForm f("target1");
		std::cout << f;
		b.signForm(f);
		std::cout << f;	
		b.executeForm(f);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------" << std::endl;
	//test RobotomyRequestForm
	try
	{
		Bureaucrat b1("b1", 46);
		RobotomyRequestForm f1("target2");
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;
		b1.executeForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		Bureaucrat b1("b1", 46);
		b1.incrementGrade();
		std::cout << b1;
		RobotomyRequestForm f1("target2");
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;
		b1.executeForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------------------------" << std::endl;
	//test ShrubberyCreationForm
	try
	{
		Bureaucrat b2("b2", 137);
		ShrubberyCreationForm f2("target3");
		std::cout << f2;
		b2.signForm(f2);
		std::cout << f2;
		b2.executeForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------" << std::endl;
	return 0;
}