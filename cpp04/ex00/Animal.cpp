/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:12:20 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/16 17:13:47 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}