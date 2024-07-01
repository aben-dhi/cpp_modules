/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:56:31 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 19:46:36 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & presidentialPardonForm) : AForm(presidentialPardonForm)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & presidentialPardonForm)
{
	AForm::operator=(presidentialPardonForm);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}