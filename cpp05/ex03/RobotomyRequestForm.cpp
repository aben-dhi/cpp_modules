/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:56:24 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 19:47:10 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & robotomyRequestForm) : AForm(robotomyRequestForm)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & robotomyRequestForm)
{
	AForm::operator=(robotomyRequestForm);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::
	cout << "*drilling noises* " << this->getTarget() << " has been robotomized." << std::endl;
}

void RobotomyRequestForm::setTarget(std::string target)
{
	this->target = target;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}