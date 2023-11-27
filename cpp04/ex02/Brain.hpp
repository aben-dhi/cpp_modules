/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:23:52 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/26 19:04:36 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain();
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};

std::ostream &operator<<(std::ostream &out, const Brain &brain);
std::ostream &operator<<(std::ostream &out, const Brain *brain);

#endif