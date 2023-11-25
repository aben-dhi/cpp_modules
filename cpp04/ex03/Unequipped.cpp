/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unequipped.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:09:45 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 15:39:56 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Unequipped.hpp"

Unequipped::Unequipped()
{
	this->_size = 0;
	this->_first = NULL;
	this->_last = NULL;
}

Unequipped::Unequipped(const Unequipped &unequipped)
{
	int i ;
	MateriaNode *tmp;
	i = unequipped.getSize();
	this->_size = 0;
	this->_first = NULL;
	this->_last = NULL;
	if (i > 0 && unequipped._first != NULL)
	{
		tmp = unequipped._first;
		for (; this->_size < i; this->_size++)
		{
			if (tmp != NULL)
				this->addNode(new MateriaNode(*tmp));
			tmp = tmp->getNext();
		}
	}
}

Unequipped &Unequipped::operator=(const Unequipped &unequipped)
{
	int i ;
	MateriaNode *tmp;
	
	if (this != &unequipped)
	{
		this->clean();
		i = unequipped.getSize();
		if (i > 0 && unequipped._first != NULL)
		{
			tmp = unequipped._first;
			for (; this->_size < i; this->_size++)
			{
				if (tmp != NULL)
					this->addNode(new MateriaNode(*tmp));
				tmp = tmp->getNext();
			}
		}
		this->_size = unequipped._size;
	}
	return (*this);
}

Unequipped::~Unequipped()
{
	// std::cout << "Trash destructor called" << std::endl;
	this->clean();
}

bool Unequipped::isDup(MateriaNode *materia) const
{
	MateriaNode *tmp;
	tmp = this->_first;
	while (tmp != NULL)
	{
		if (tmp == materia)
			return (true);
		tmp = tmp->getNext();
	}
	return (false);
}

void Unequipped::addNode(MateriaNode *materia)
{
	MateriaNode *tmp;

	if (this->_size == 0)
		this->_first = materia;
	else
	{
		if (this->isDup(materia) == true)
			return ;
		tmp = this->_first;
		while (tmp == NULL)
		{
			if (tmp->getMateria() == materia->getMateria())
				materia->setDelete(false);
			tmp = tmp->getNext();
		}
		this->_last->setNext(materia);
		materia->setPrev(this->_last);
	}
	this->_last = materia;
	this->_size++;
}

void Unequipped::deleteNode(AMateria *node)
{
	MateriaNode *tmp;
	
	tmp = this->_first;
	while (tmp != NULL && tmp->getMateria() != node)
		tmp = tmp->getNext();
	if (tmp != NULL)
	{
		if (tmp->getPrev() != NULL)
			tmp->getPrev()->setNext(tmp->getNext());
		if (tmp->getNext() != NULL)
			tmp->getNext()->setPrev(tmp->getPrev());
		if (tmp == this->_first)
			this->_first = tmp->getNext();
		if (tmp == this->_last)
			this->_last = tmp->getPrev();
		tmp->setDelete(false);
		delete tmp;
	}
}

void Unequipped::clean()
{
	MateriaNode *tmp;
	MateriaNode *next;

	if (this->_size > 0 && this->_first != NULL)
	{
		tmp = this->_first;
		while (tmp != NULL)
		{
			next = tmp->getNext();
			delete tmp;
			tmp = next;
		}
		this->_first = NULL;
		this->_last = NULL;
		this->_size = 0;
	}
}

MateriaNode *Unequipped::getFirst() const
{
	return (this->_first);
}

MateriaNode *Unequipped::getLast() const
{
	return (this->_last);
}

MateriaNode *Unequipped::getNode(int idx) const
{
	MateriaNode *tmp;

	tmp = NULL;
	if (idx < this->_size)
	{
		tmp = this->_first;
		for (int i = 0; i < idx; i++)
			tmp = tmp->getNext();
	}
	return (tmp);
}

int Unequipped::getSize() const
{
	return (this->_size);
}