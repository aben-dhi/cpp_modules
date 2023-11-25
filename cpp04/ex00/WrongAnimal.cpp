/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:17:34 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/16 17:18:36 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	*this = animal;
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	this->type = animal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "MOO??" << std::endl;
}