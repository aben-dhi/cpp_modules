/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:24:10 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 14:37:40 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

std::ostream &operator<<(std::ostream &out, const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		out << brain.getIdea(i) << std::endl;
	return (out);
}

std::ostream &operator<<(std::ostream &out, const Brain *brain)
{
	for (int i = 0; i < 100; i++)
		out << brain->getIdea(i) << std::endl;
	return (out);
}
