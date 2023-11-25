/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:11 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/22 16:17:01 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hit_points ;
		int _energy_points ;
		int _attack_damage ;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &claptrap);
		ClapTrap &operator=(ClapTrap const &claptrap);
		~ClapTrap();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		int getHitPoints();
		int getEnergyPoints();
		int getAttackDamage();
};

#endif