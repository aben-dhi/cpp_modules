/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:18:09 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/01 16:21:22 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Data.hpp"

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(Serializer const &src);
		Serializer &operator=(Serializer const &src);
		uintptr_t serialize(Data *data);
		Data *deserialize(void *raw);
};

#endif