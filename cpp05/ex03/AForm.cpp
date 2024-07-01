/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:34:41 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 18:45:52 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	_signed = false;
}

AForm::AForm(AForm const &form) : _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute)
{
	_signed = form._signed;
}

AForm &AForm::operator=(AForm const &form)
{
	_signed = form._signed;
	return *this;
}

AForm::~AForm()
{
}

std::string const AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
	out << "Form " << form.getName() << " is ";
	if (form.getSigned())
		out << "signed";
	else
		out << "not signed";
	out << " and requires grade " << form.getGradeToSign() << " to be signed and grade " << form.getGradeToExecute() << " to be executed";
	out << std::endl;
	return out;
}
