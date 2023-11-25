/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:24:51 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 16:19:32 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// me->equip(new Ice());
	// me->equip(new Ice());
	// me->equip(new Ice());
	// me->equip(new Ice());
	// Character *hh = new Character("hh");
	// hh->equip(new Cure());
	// hh->equip(new Cure());
	// hh->equip(new Cure());
	// hh->equip(new Cure());
	// hh->use(3, *me);
	// *hh = *me;
	// std::cout << "welp\n";
	// me->unequip(3);
	// me->equip(new Ice());
	// me->equip(new Ice());
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	
	// hh->use(3, *bob);
	// hh->unequip(3);

	me->use(0, *bob);
	me->use(1, *bob);
	// system("leaks MateriaSource");
	// delete hh;
	delete bob;
	delete me;
	delete src;
	return 0;
}
