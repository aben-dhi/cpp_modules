/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:14:07 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/27 17:46:55 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->brain = new Brain();
	*this->brain = *cat.brain;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Assignation Operator Called" << std::endl;
	if (this != &cat)
	{
		if (this->brain)
			delete this->brain;
		this->brain = new Brain();
		this->type = cat.type;
		*this->brain = *cat.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	if (this->brain)
		delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Cat &cat)
{
	out << cat.getType() << std::endl;
	return (out);
}

std::ostream &operator<<(std::ostream &out, const Cat *cat)
{
	out << cat->getType() << std::endl;
	return (out);
}

std::string Cat::getBrainIdea(int index) const
{
	return (this->brain->getIdea(index));
}

void Cat::setBrainIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}