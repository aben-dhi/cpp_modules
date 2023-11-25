/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:55:14 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/06 10:10:56 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 10;
	Zombie *zombie;
	zombie = zombieHorde(n, "ALEXX");
	for (int i = 0; i < n; i++)
		zombie[i].announce();
	delete [] zombie;
	// system("leaks Zombie");
	return (0);
}