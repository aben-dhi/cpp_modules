/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaNode.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:19:54 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 15:39:32 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaNode.hpp"

MateriaNode::MateriaNode()
{
	this->_next = NULL;
	this->_prev = NULL;
	this->_materia = NULL;
	this->_delete = true;
}

MateriaNode::MateriaNode(AMateria *materia)
{
	this->_next = NULL;
	this->_prev = NULL;
	this->_materia = materia;
	this->_delete = true;
}

MateriaNode::MateriaNode(const MateriaNode &node)
{
	this->_next = NULL;
	this->_prev = NULL;
	this->_materia = node._materia->clone();
	this->_delete = node._delete;
}

MateriaNode &MateriaNode::operator=(const MateriaNode &node)
{
	if (this != &node)
	{
		this->_next = node._next;
		this->_prev = node._prev;
		this->_materia = node._materia->clone();
		this->_delete = node._delete;
	}
	return (*this);
}

MateriaNode::~MateriaNode()
{
	// std::cout << "MateriaNode destructor called" << std::endl;
	if (this->_materia && this->_delete == true)
		delete this->_materia;
}

MateriaNode *MateriaNode::getNext() const
{
	return (this->_next);
}

MateriaNode *MateriaNode::getPrev() const
{
	return (this->_prev);
}

AMateria *MateriaNode::getMateria() const
{
	return (this->_materia);
}

void MateriaNode::setNext(MateriaNode *next)
{
	this->_next = next;
}

void MateriaNode::setPrev(MateriaNode *prev)
{
	this->_prev = prev;
}

void MateriaNode::setDelete(bool del)
{
	this->_delete = del;
}