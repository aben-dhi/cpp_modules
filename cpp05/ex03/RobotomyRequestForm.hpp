/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:56:58 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 19:45:51 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	std::string target;
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & robotomyRequestForm);
	RobotomyRequestForm & operator=(const RobotomyRequestForm & robotomyRequestForm);
	~RobotomyRequestForm();
	void setTarget(std::string target);
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif