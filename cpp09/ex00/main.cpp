/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:41:16 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/12 11:40:15 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	// (void)argv;
	if (argc != 2)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return 1;
	}
	BitcoinExchange b;
	b.run(argv[1]);
	return 0;
}