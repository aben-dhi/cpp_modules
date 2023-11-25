/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:42:32 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/21 16:01:23 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "ScavTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = scavtrap._name;
	this->_hit_points = scavtrap._hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_attack_damage = scavtrap._attack_damage;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_name = scavtrap._name;
	this->_hit_points = scavtrap._hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_attack_damage = scavtrap._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
