/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:14:07 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/16 17:15:12 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
