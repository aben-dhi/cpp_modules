/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:44:00 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/06 17:55:26 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_fixed_point_value = f.getRawBits();
	return (*this);
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = i << this->_fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = roundf(f * (1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixed_point_value / (1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->_fixed_point_value >> this->_fractional_bits);
}