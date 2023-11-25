/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:23:50 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 18:19:08 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _index(0)
{
	// std::cout << "IMateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) : _index(materiaSource._index)
{
	// std::cout << "IMateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource._materia[i])
			this->_materia[i] = materiaSource._materia[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	// std::cout << "IMateriaSource assignation operator called" << std::endl;
	if (this != &materiaSource)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i])
				delete this->_materia[i];
			this->_materia[i] = NULL;
			if (materiaSource._materia[i])
				this->_materia[i] = materiaSource._materia[i]->clone();
		}
		this->_index = materiaSource._index;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "IMateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_index == -1)
	{
		if (materia != NULL)
			delete materia;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == materia)
			return ;
	}
	this->_materia[this->_index] = materia;
	if (this->_index == 3)
		this->_index = -1;
	else
		this->_index++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
		{
			if (this->_materia[i]->getType().compare( type ) == 0)
			{
				// std::cout << "MateriaSource createMateria called " << type << std::endl;
				return (this->_materia[i]->clone());
			}
		}
	}
	std::cout << "Materia source " << type << " not found"<< std::endl;
	return (NULL);
}