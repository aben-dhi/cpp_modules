/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:41:27 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/22 15:54:48 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "DiamondTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name; 
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap) : ClapTrap(diamondtrap._name + "_clap_name"), ScavTrap(diamondtrap._name), FragTrap(diamondtrap._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->_name = diamondtrap._name;
	this->_hit_points = diamondtrap._hit_points;
	this->_energy_points = diamondtrap._energy_points;
	this->_attack_damage = diamondtrap._attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is " << this->_name << " and his ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
