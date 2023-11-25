/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:17 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/21 18:56:12 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("WEWE");
	// ClapTrap claptrap2(claptrap);
	// ClapTrap claptrap3 = claptrap2;
	// std::cout << claptrap.getHitPoints() <<"  "<< claptrap.getEnergyPoints() << "  " << claptrap.getAttackDamage()<< std::endl;
	claptrap.attack("ZEZE");

	// std::cout << claptrap.getHitPoints() <<"  "<< claptrap.getEnergyPoints() << "  " << claptrap.getAttackDamage()<< std::endl;
	claptrap.takeDamage(5);
	claptrap.beRepaired(10);
	claptrap.attack("2");

	// std::cout << claptrap.getHitPoints() <<"  "<< claptrap.getEnergyPoints() << "  " << claptrap.getAttackDamage()<< std::endl;
	// claptrap.beRepaired(10);
	// std::cout << claptrap.getHitPoints() <<"  "<< claptrap.getEnergyPoints() << "  " << claptrap.getAttackDamage()<< std::endl;
	// claptrap.attack("ZEZE");
	// claptrap2.attack("ZEZE");
	// std::cout << claptrap.getName() << std::endl;
	// std::cout << claptrap.getHitPoints() << std::endl;
	// std::cout << claptrap.getEnergyPoints() << std::endl;
	// std::cout << claptrap.getAttackDamage() << std::endl;
	return (0);
}