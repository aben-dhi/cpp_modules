/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:56:08 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 19:44:54 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

//adding a setTarget function to set the target of the form
class PresidentialPardonForm : public AForm
{
public:
	std::string target; 
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm & presidentialPardonForm);
	PresidentialPardonForm & operator=(const PresidentialPardonForm & presidentialPardonForm);
	~PresidentialPardonForm();
	void setTarget(std::string target);
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif