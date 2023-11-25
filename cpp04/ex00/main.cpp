/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:17:23 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 16:31:30 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	std::cout << "meta->getType() = " << meta->getType() << std::endl;
	std::cout << "j->getType() = " << j->getType() << std::endl;
	std::cout << "i->getType() = " << i->getType() << std::endl;
	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << "wrong_meta->getType() = " << wrong_meta->getType() << std::endl;
	std::cout << "wrong_cat->getType() = " << wrong_cat->getType() << std::endl;
	std::cout << std::endl;
	
	wrong_cat->makeSound();
	wrong_meta->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;
	// system("leaks Animal");
	return (0);
}