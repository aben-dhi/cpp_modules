/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:37:50 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/13 19:36:54 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//text both for deque and vector simultaneously
int main(int ac, char **av)
{
	if (ac < 2) {
		std::cerr << "Usage: ./PmergeMe [int1] [int2] [int3] ..." << std::endl;
		return 1;
	}
	try
	{
		PmergeMe<std::vector<int> > v(av + 1);
		std::cout << "BEFORE: ------------------------------------------------" << std::endl;
		v.print();
		v.merge();
		PmergeMe<std::deque<int> > d(av + 1);
		d.merge();
		std::cout << "AFTER: -------------------------------------------------" << std::endl;
		d.print();
		std::cout << "-----------------------------------------------------------" << std::endl;
		v.print_time();
		d.print_time();
		std::cout << "-----------------------------------------------------------" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}