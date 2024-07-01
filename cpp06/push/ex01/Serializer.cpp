/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:19:35 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/01 16:21:50 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(Serializer const &src)
{
	*this = src;
}

Serializer &Serializer::operator=(Serializer const &src)
{
	(void)src;
	return *this;
}

uintptr_t Serializer::serialize(Data *data)
{
	return reinterpret_cast<uintptr_t>(data);
}

Data *Serializer::deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}
