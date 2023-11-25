/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:19:08 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/21 17:48:09 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Point &p) : _x(p.getX()), _y(p.getY())
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &p)
{
	(void)p;
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_y);
}

//we use a barycentric coordinate system to check if a point is inside a triangle
//https://en.wikipedia.org/wiki/Barycentric_coordinate_system

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d0 =	(b.getX() - c.getX()) * (point.getY() - c.getY()) - (b.getY() - c.getY()) * (point.getX() - c.getX());
	Fixed d1 = (c.getX() - a.getX()) * (point.getY() - a.getY()) - (c.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed d2 = (a.getX() - b.getX()) * (point.getY() - b.getY()) - (a.getY() - b.getY()) * (point.getX() - b.getX());
        return (d1 > 0 && d2 > 0 && d0 > 0 )||( d1 < 0 && d2 < 0 && d0 < 0);
}
