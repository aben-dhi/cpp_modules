/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:20:03 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/26 19:06:19 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materia[4];
		int _index;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiaSource);
		MateriaSource &operator=(const MateriaSource &materiaSource);
		~MateriaSource();
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};

#endif