/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:40:55 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:41 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixed_point_value;
		static const int _fractional_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed &operator=(const Fixed &f);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif