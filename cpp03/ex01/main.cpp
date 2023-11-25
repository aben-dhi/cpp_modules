/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:17 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/07 18:54:11 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("WEWE");
	ScavTrap scavtrap2(scavtrap);
	ScavTrap scavtrap3 = scavtrap2;
	scavtrap.attack("ZEZE");
	scavtrap.takeDamage(10);
	scavtrap.beRepaired(10);
	scavtrap2.attack("ZEZE");
	scavtrap.guardGate();
	// std::cout << scavtrap3.getName() << std::endl;
	// std::cout << scavtrap3.getHitPoints() << std::endl;
	// std::cout << scavtrap3.getEnergyPoints() << std::endl;
	// std::cout << scavtrap3.getAttackDamage() << std::endl;
	
	return (0);
}