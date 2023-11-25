/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:08:55 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 16:45:41 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void Contact::add()
{
    std::cout << "Enter first name: ";
    std::getline(std::cin, this->first_name);
    while (this->first_name.empty())
	{
		if (std::cin.eof())
			exit(0);
        std::cout << "First name cannot be empty. Enter first name: ";
        std::getline(std::cin, this->first_name);
    }
    std::cout << "Enter last name: ";
    std::getline(std::cin, this->last_name);
    while (this->last_name.empty())
	{
		if (std::cin.eof())
			exit(0);
        std::cout << "Last name cannot be empty. Enter last name: ";
        std::getline(std::cin, this->last_name);
    }
	std::cout << "Enter nickname: ";
    std::getline(std::cin, this->nickname);
    while (this->nickname.empty())
	{
		if (std::cin.eof())
			exit(0);
        std::cout << "Nickname cannot be empty. Enter nickname: ";
        std::getline(std::cin, this->nickname);
    }
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phone_number);
	while (this->phone_number.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "Phone number cannot be empty. Enter phone number: ";
		std::getline(std::cin, this->phone_number);
	}
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	while (this->darkest_secret.empty())
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "Darkest secret cannot be empty. Enter darkest secret ";
        std::getline(std::cin, this->darkest_secret);
	}
}

void Contact::display(int index)
{
	std::cout << std::setw(10) << index << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}


void Contact::displayContact()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}