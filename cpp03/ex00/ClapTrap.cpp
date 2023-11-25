/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:14 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/21 17:41:07 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" ;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
std ::cout << " with name " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

//When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
void ClapTrap::attack(std::string const &target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		// takeDamage(this->_attack_damage);
		this->_energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " unresponsive!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

//When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
//cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
//or energy points left.
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hit_points += amount;
		_energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " unresponsive!!" << std::endl;
}

std::string ClapTrap::getName()
{
	return (this->_name);
}

int ClapTrap::getHitPoints()
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoints()
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage()
{
	return (this->_attack_damage);
}