/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:59:20 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/10 19:04:36 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//test all possible operators implemented in Fixed class
// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << "a is " << a << std::endl; //a is 0
// 	std::cout << "++a is " << ++a << std::endl; //++a is 0.00390625
// 	std::cout << "a is " << a << std::endl; //a is 0.00390625
// 	std::cout << "a++ is " << a++ << std::endl; //a++ is 0.00390625
// 	std::cout << "a is " << a << std::endl; //a is 0.0078125
// 	std::cout << "b is " << b << std::endl; //b is 10.1016
// 	std::cout << "max(a, b) is " << Fixed::max( a, b ) << std::endl; //max(a, b) is 10.1016
// 	std::cout << "min(a, b) is " << Fixed::min( a, b ) << std::endl; //min(a, b) is 0.0078125
// 	std::cout << "a + b is " << a + b << std::endl; //a + b is 10.1094
// 	std::cout << "a - b is " << a - b << std::endl; //a - b is -10.0938
// 	std::cout << "a * b is " << a * b << std::endl; //a * b is 0.078125
// 	std::cout << "a / b is " << a / b << std::endl; //a / b is 0.000773438
// 	std::cout << "a > b is " << (a > b) << std::endl; //a > b is 0
// 	std::cout << "a < b is " << (a < b) << std::endl; //a < b is 1
// 	std::cout << "a >= b is " << (a >= b) << std::endl; //a >= b is 0
// 	std::cout << "a <= b is " << (a <= b) << std::endl; //a <= b is 1
// 	std::cout << "a == b is " << (a == b) << std::endl; //a == b is 0
// 	std::cout << "a != b is " << (a != b) << std::endl; //a != b is 1
// 	std::cout << "a++ is " << a++ << std::endl; //a++ is 0.0078125
// 	std::cout << "a-- is " << a-- << std::endl; //a-- is 0.0117188
// 	std::cout << "--a is " << --a << std::endl; //--a is 0.0078125
	
// 	return 0;
// }

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}