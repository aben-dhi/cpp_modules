/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:59:20 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/10 12:20:14 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    //Example usage:
    Point a(2, 3);
    Point b(7, 1);
    Point c(6, 8);
    Point point(10, 8);

    bool isInside = bsp(a, b, c, point);
    if (isInside)
    {
        std::cout << "Point is inside the triangle." << std::endl;
    }
    else
    {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}