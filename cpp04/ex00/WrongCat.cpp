/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:19:11 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/16 17:19:51 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
	this->type = cat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MOO??" << std::endl;
}
