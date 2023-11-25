/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:17:23 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 16:30:25 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
// #include "Brain.hpp"


// int main()
// {
//we're gonna test the deep copy of the brain class
//we're gonna test if teh brain class is working properly
//we're gonna allocate 10 brains and set ideas and then and delete them
//and then we're gonna create a cat and a dog and copy them and see if the ideas are the same
// Include necessary header files
	
// }

int main()
{
	const int arraySize = 10;
	Animal* animalArray[arraySize];

// 	Dog basic;
// {
// Dog tmp = basic;
// }

	// Populate the animalArray with Dog and Cat objects
	for (int i = 0; i < arraySize / 2; i++) {
		animalArray[i] = new Dog();
		std::cout << "------------------------------------------" << std::endl;
		animalArray[i + arraySize / 2] = new Cat();
		std::cout << "------------------------------------------" << std::endl;
	}

	for (int i = 0; i < arraySize; i++) {
		std::cout << "------------------------------------------" << std::endl;
		animalArray[i]->makeSound();
		std::cout << "------------------------------------------" << std::endl;
	}
	// Delete every Animal object in the array
	for (int i = 0; i < arraySize; i++) {
		delete animalArray[i];
		std::cout << "------------------------------------------" << std::endl;
	}
	// system("leaks Animal");
	return 0;
}
