/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:17 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/22 16:09:28 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fragtrap("fragtrap");
	FragTrap fragtrap2(fragtrap);
	FragTrap fragtrap3("fragtrap3");

	fragtrap3 = fragtrap2;
	fragtrap.attack("target");
	std::cout << fragtrap.getHitPoints() <<"  "<< fragtrap.getEnergyPoints() << "  " << fragtrap.getAttackDamage()<< std::endl;
	fragtrap.takeDamage(20);
	std::cout << fragtrap.getHitPoints() <<"  "<< fragtrap.getEnergyPoints() << "  " << fragtrap.getAttackDamage()<< std::endl;
	fragtrap.beRepaired(10);
	std::cout << fragtrap.getHitPoints() <<"  "<< fragtrap.getEnergyPoints() << "  " << fragtrap.getAttackDamage()<< std::endl;
	fragtrap.highFivesGuys();
	return (0);
}