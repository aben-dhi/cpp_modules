/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:15:16 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 14:48:28 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->brain = new Brain();
	*this->brain = *dog.brain;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	if (this != &dog)
	{
		if (this->brain)
			delete this->brain;
		this->type = dog.type;
		*this->brain = *dog.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	if (this->brain)
		delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

std::string Dog::getBrainIdea(int index) const
{
	return (this->brain->getIdea(index));
}

void Dog::setBrainIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}

std::ostream &operator<<(std::ostream &out, const Dog &dog)
{
	out << dog.getType() << std::endl;
	return (out);
}

std::ostream &operator<<(std::ostream &out, const Dog *dog)
{
	out << dog->getType() << std::endl;
	return (out);
}

