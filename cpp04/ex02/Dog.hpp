/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:15:20 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/24 14:48:10 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		virtual ~Dog();
		void makeSound() const;
		std::string getBrainIdea(int index) const;
		void setBrainIdea(int index, std::string idea);
};

std::ostream &operator<<(std::ostream &out, const Dog &dog);
std::ostream &operator<<(std::ostream &out, const Dog *dog);

#endif