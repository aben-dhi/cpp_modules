/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:17 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/22 16:07:23 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondtrap("something");
	DiamondTrap diamondtrap2(diamondtrap);
	DiamondTrap diamondtrap3("someone");

	diamondtrap3 = diamondtrap2;
	diamondtrap.attack("brother");
	std::cout << diamondtrap.getHitPoints() <<"  "<< diamondtrap.getEnergyPoints() << "  " << diamondtrap.getAttackDamage()<< std::endl;
	diamondtrap.takeDamage(20);
	std::cout << diamondtrap.getHitPoints() <<"  "<< diamondtrap.getEnergyPoints() << "  " << diamondtrap.getAttackDamage()<< std::endl;
	diamondtrap.beRepaired(10);
	std::cout << diamondtrap.getHitPoints() <<"  "<< diamondtrap.getEnergyPoints() << "  " << diamondtrap.getAttackDamage()<< std::endl;
	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	diamondtrap.whoAmI();
	return (0);
}