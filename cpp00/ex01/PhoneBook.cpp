/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:51:22 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 16:46:47 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
//replace the oldest one by the new one.
void PhoneBook::add()
{
	
	if (this->index < 8) {
        // If there is room in the phone book, simply add a new contact
        this->contacts[this->index].add();
    } else {
        // If the phone book is full, replace the oldest contact
        int oldestIndex = this->index % 8;
        this->contacts[oldestIndex].add();
    }
	this->index++;
}

void PhoneBook::search()
{
	int i;
	int index;
	std::string input;
	index = 0;
	if (!this->index)
	{
		std::cerr << "No contacts" << std::endl;
		return ;
	}
	std::cout << "   index  |first name| last name| nickname |" << std::endl;
	i = 0;
	while (i < this->index && i < 8)
	{
		this->contacts[i].display(i);
		i++;
	}
	std::cout << "Enter an index: ";
	std::getline(std::cin, input);
	for (unsigned long i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cerr << "Invalid index" << std::endl;
			return ;
		}
	}
	index = std::atoi(input.c_str());
	if (index >= 0 && index < this->index && index < 8)
		this->contacts[index].displayContact();
	else
		std::cerr << "Invalid index" << std::endl;
}

int main()
{
	std::string command;
	PhoneBook phonebook;
	while (1)
	{
		std::cout << "Enter a command: (ADD / SEARCH / EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT" || std::cin.eof())
			break ;
		else if (command == "ADD")			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cerr << "Invalid command" << std::endl;
	}
	return (0);
}