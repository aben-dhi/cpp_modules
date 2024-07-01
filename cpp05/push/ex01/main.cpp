/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:10:59 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/06/04 12:27:49 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//testing form class
int main()
{
	try
	{
		Bureaucrat b("b", 1);
		Form f("f", 1, 1);
		std::cout << f;
		b.signForm(f);
		std::cout << f;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		Bureaucrat b1("b1", 150);
		Form f1("f1", 150, 1);
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;
		b1.signForm(f1);
		std::cout << f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		Bureaucrat b2("b2", 3);
		b2.incrementGrade();
		std::cout << b2;
		Form f2("f2", 2, 1);
		std::cout << f2;
		b2.signForm(f2);
		std::cout << f2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}