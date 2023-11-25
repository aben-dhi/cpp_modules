/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:22:26 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 16:33:56 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	this->_type = cure._type;
}

Cure &Cure::operator=(const Cure &cure)
{
	// std::cout << "Cure assignation operator called" << std::endl;
	this->_type = cure._type;
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
