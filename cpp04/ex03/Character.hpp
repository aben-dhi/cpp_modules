/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:16:07 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 14:10:12 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Unequipped.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		int _count;
		Unequipped *_trash;
	public:
		Character();
		Character(std::string name);
		Character(const Character &character);
		Character &operator=(const Character &character);
		virtual ~Character();
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif