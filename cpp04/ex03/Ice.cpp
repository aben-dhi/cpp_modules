/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:20:41 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 15:38:44 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	this->_type = ice._type;
}

Ice &Ice::operator=(const Ice &ice)
{
	// std::cout << "Ice assignation operator called" << std::endl;
	this->_type = ice._type;
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}