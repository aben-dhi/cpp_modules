/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:27:01 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 15:38:54 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("unknown type")
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : _type( amateria._type )
{
	// std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
	// std::cout << "AMateria assignation operator called" << std::endl;
	this->_type = amateria._type;
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "use " << this->_type << " on " << target.getName() << std::endl;
}