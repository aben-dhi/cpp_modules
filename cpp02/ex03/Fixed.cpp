/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:59:09 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/06 18:04:56 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	this->_fixed_point_value = f.getRawBits();
	return (*this);
}

Fixed::Fixed(const int i)
{
	this->_fixed_point_value = i << this->_fractional_bits;
}

Fixed::Fixed(const float f)
{
	this->_fixed_point_value = roundf(f * (1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
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

bool Fixed::operator>(const Fixed &f) const
{
	return (this->_fixed_point_value > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f) const
{
	return (this->_fixed_point_value < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const
{
	return (this->_fixed_point_value >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f) const
{
	return (this->_fixed_point_value <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f) const
{
	return (this->_fixed_point_value == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f) const
{
	return (this->_fixed_point_value != f.getRawBits());
}

Fixed Fixed::operator+(const Fixed &f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed &f) const
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(const Fixed &f) const
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed &f) const
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
