/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:46:33 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/08 12:49:41 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//we're gonna randomly generate the values of the container ranging from 0 to 10000
//we gotta catch the exception thrown by the shortestSpan and longestSpan functions as well

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}

// int main()
// {
// 	Span sp = Span(100);
	
// 	for (int i = 0; i < 10000; i++)
// 	{
// 		try
// 		{
// 			sp.addNumber(rand() % 10000);
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cerr << "number too much" << '\n';
// 		}
// 	}
		
// 	try
// 	{
// 		std::cout << sp.shortestSpan() << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "Not enough numbers to calculate the shortest span" << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "Not enough numbers to calculate the longest span" << std::endl;
// 	}
	
// 	return 0;
// }