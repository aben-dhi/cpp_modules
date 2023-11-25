/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaNode.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:17:23 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 19:24:16 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIANODE_HPP
#define MATERIANODE_HPP

#include "AMateria.hpp"

class MateriaNode
{
	private:
		MateriaNode *_prev;
		MateriaNode *_next;
		AMateria *_materia;
		bool _delete;

	public:
		MateriaNode();
		MateriaNode(AMateria *materia);
		MateriaNode(const MateriaNode &node);
		MateriaNode &operator=(const MateriaNode &node);
		~MateriaNode();
		MateriaNode *getPrev() const;
		MateriaNode *getNext() const;
		AMateria *getMateria() const;
		void setPrev(MateriaNode *prev);
		void setNext(MateriaNode *next);
		void setDelete(bool del);
};

#endif