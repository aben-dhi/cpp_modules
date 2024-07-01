/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:51:26 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/23 21:49:28 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern & intern);
	Intern & operator=(const Intern & intern);
	~Intern();
	AForm * makePresidentialPardonForm(std::string target);
	AForm * makeShrubberyCreationForm(std::string target);
	AForm * makeRobotomyRequestForm(std::string target);
	AForm * makeForm(std::string formName, std::string target);
};

#endif