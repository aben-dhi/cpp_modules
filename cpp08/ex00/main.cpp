/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:31:25 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/07 18:37:31 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//we're gonna manually enter the values of the containers using arguments
//and then we're gonna search for a value that exists and one that doesn't
//we're gonna use a try catch block to catch the exception thrown by the function

int main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << "Please enter the container values and the value to search for" << std::endl;
		return 1;
	}
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;
	for (int i = 1; i < ac - 1; i++)
	{
		v.push_back(atoi(av[i]));
		l.push_back(atoi(av[i]));
		d.push_back(atoi(av[i]));
	}
	try
	{
		std::cout << "vector : "<< easyfind(v, atoi(av[ac - 1])) << " value found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found in vector" << std::endl;
	}
	try
	{
		std::cout <<"list : " <<easyfind(l, atoi(av[ac - 1])) << " value found" <<  std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found in list" << std::endl;
	}
	try
	{
		std::cout << "deque : " << easyfind(d, atoi(av[ac - 1])) << " value found" <<  std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value not found in deque" << std::endl;
	}
	return 0;
}