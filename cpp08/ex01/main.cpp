/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:46:33 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/09 10:08:48 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

//we're gonna randomly generate the values of the container ranging from 0 to 10000

int main()
{
	Span sp = Span(5);
	try
	{
		// sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "numbers are less than 2, please enter two or more numbers!" << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "too many elements!" << '\n';
	}
	return 0;
}

// int main( void )
// {
//     std::cout << "---- TEST Subject -----" << std::endl;

//     Span sp = Span(5);
// 	try
// 	{
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 		sp.addNumber(12);
// 		try
// 		{
// 			std::cout << sp.shortestSpan() << std::endl;
// 			std::cout << sp.longestSpan() << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << "numbers are less than 2, please enter two or more numbers!" << '\n';
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "too many elements!" << '\n';
// 	}
//     std::cout << "---- TEST Subject done -----" << std::endl;
//     std::cout << std::endl;
//     std::cout << "----------overload the span test----------" << std::endl;
//     try{
//         sp.addNumber( 12 );
//     } catch ( std::exception& e ) {
//         std::cout << "too many elements!" << std::endl;
//     }
//     std::cout << "----------overload the span test done----------" << std::endl;
//     std::cout << "\n---- TEST BIG -----" << std::endl;
    
//     try {
// 		std::vector<int> v( 10000 );
//         std::srand( time ( NULL ) );
//         std::generate( v.begin(), v.end(), std::rand );

//         Span span( v.size() );

//         span.addNumber( v.begin(), v.end() );

//         std::cout << "Longest span: " << span.longestSpan() << std::endl;
//         std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
//     } catch ( std::exception& e ) {
//         std::cout << e.what() << std::endl; 
//     }
//     std::cout << "---- TEST BIG done -----" << std::endl;
//     return EXIT_SUCCESS;
// }
