/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:36:53 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/21 19:44:15 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "FragTrap";
	this->_hit_points = 100;
	// this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap(fragtrap._name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragtrap;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = fragtrap._name;
	this->_hit_points = fragtrap._hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_attack_damage = fragtrap._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
}