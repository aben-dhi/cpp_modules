/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unequipped.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:09:08 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 19:17:29 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNEQUIPPED_HPP
#define UNEQUIPPED_HPP

#include "MateriaNode.hpp"

class Unequipped
{
	private:
		MateriaNode* _first;
		MateriaNode* _last;
		int _size;
	public:
		Unequipped();
		Unequipped(const Unequipped &unequipped);
		Unequipped &operator=(const Unequipped &unequipped);
		~Unequipped();
		bool isDup(MateriaNode *materia) const;
		void addNode(MateriaNode *materia);
		void deleteNode(AMateria *node);
		void clean();
		MateriaNode *getFirst() const;
		MateriaNode *getLast() const;
		MateriaNode *getNode(int idx) const;
		int getSize() const;;
};

#endif