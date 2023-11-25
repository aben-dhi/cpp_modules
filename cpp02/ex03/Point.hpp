/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:19:13 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/10 19:52:42 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	
		// Fixed test_x;
		// Fixed test_y;    
	public:
		Point();
		Point(const Point &p);
		Point(const float x, const float y);
		~Point();
		Point &operator=(const Point &p);
		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif