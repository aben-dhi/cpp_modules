/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:15:16 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/16 17:16:02 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}