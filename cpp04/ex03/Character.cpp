/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:15:57 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 16:19:55 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default"), _count(0)
{
	// std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_trash = new Unequipped();
}

Character::Character(std::string name) : _name(name), _count(0)
{
	// std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_trash = new Unequipped();
}

Character::Character(const Character &character) : _name(character._name), _count(character._count)
{
	// std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		if (character._inventory[i])
			this->_inventory[i] = character._inventory[i]->clone();
	}
	this->_trash = new Unequipped(*character._trash);
}

Character &Character::operator=(const Character &character)
{
	// std::cout << "Character assignation operator called" << std::endl;
	if (this != &character)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (character._inventory[i])
				this->_inventory[i] = character._inventory[i]->clone();
		}
		this->_count = character._count;
		if (this->_trash)
			delete this->_trash;
		if (character._trash)
			this->_trash = new Unequipped(*character._trash);
	}
	return (*this);
}

Character::~Character()
{
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	if (this->_trash)
		delete this->_trash;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	// std::cout << "Character equip called"  << std::endl;
	if (this->_count == -1)
	{
		if (this->_trash != NULL)
			this->_trash->addNode(new MateriaNode(m));
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return ;
	}
	this->_inventory[this->_count] = m;
	for ( ; this->_count < 4; this->_count++)
	{
		if (this->_inventory[this->_count] == NULL)
			break ;
	}
	if (this->_inventory[this->_count] != NULL)
		this->_count = -1;
	if (this->_trash != NULL)
		this->_trash->deleteNode(m);
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
		return ;
	// std::cout << "Character unequip called" << this->_inventory[idx] << std::endl;
	this->_trash->addNode(new MateriaNode(this->_inventory[idx]));
	this->_inventory[idx] = NULL;
	if (this->_count == -1)
		this->_count = idx;
	else if (this->_count > idx)
		this->_count = idx;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}
