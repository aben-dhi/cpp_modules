/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:14:24 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/26 19:03:46 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		~Cat();
		void makeSound() const;
		std::string getBrainIdea(int index) const;
		void setBrainIdea(int index, std::string idea);
};

std::ostream &operator<<(std::ostream &out, const Cat &cat);
std::ostream &operator<<(std::ostream &out, const Cat *cat);

#endif