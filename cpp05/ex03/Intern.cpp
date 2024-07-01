/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:51:22 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/23 21:57:37 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern & intern)
{
	(void)intern;
}

Intern & Intern::operator=(const Intern & intern)
{
	(void)intern;
	return (*this);
}

Intern::~Intern()
{
}

AForm * Intern::makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm * Intern::makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}


// we're going to use switch statement instead of ugly if else branching to make the code more readable
AForm * Intern::makeForm(std::string formName, std::string target)
{
	AForm * (Intern::*ptr[3])(std::string) = {&Intern::makePresidentialPardonForm, &Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm};
	std::string forms[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
			return (this->*ptr[i])(target);
	}
	std::cout << "Form not found." << std::endl;
	return (NULL);
}