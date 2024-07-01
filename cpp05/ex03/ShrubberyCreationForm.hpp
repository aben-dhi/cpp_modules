/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:52:29 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 19:46:17 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
	std::string target;
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & shrubberyCreationForm);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & shrubberyCreationForm);
	~ShrubberyCreationForm();
	void setTarget(std::string target);
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif