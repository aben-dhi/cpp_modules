/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:12:29 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/25 16:26:59 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		Animal &operator<<(const std::string type);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, const Animal &animal);
std::ostream &operator<<(std::ostream &out, const Animal *animal);

#endif