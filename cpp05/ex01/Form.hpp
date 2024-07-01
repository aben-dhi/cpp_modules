/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:34:38 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 18:45:52 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;
public:
	Form();
	Form(std::string const name, int gradeToSign, int gradeToExecute);
	Form(Form const &form);
	Form &operator=(Form const &form);
	~Form();
	std::string const getName() const;
	bool beSigned() const;  
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat const &bureaucrat);
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif