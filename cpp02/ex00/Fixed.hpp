/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:34:15 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/11 09:45:10 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _fixed_point_value;
		static const int _fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f); 
		Fixed &operator=(const Fixed &f);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif