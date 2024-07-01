/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:20:39 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/06/11 14:53:12 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//the serialization is done by casting the pointer to uintptr_t
//and the deserialization is done by casting the uintptr_t to the pointer
//this is a simple example and it's not safe to use in a real project
//because the pointer can be invalid after the serialization
//and the deserialization can cause a segmentation fault
//this is just a simple example to show how to serialize and deserialize a struct
//in a real project you should use a serialization library like boost::serialization
//or google protocol buffers

int main()
{
	Serializer s;
	Data data;
	Data *data2;

	data.s1 = "Hello";
	data.n = 42;
	data.s2 = "World";

	uintptr_t serialized = s.serialize(&data);
	data2 = s.deserialize(reinterpret_cast<void *>(serialized));

	std::cout << "data.s1: " << data.s1 << std::endl;
	std::cout << "data.n: " << data.n << std::endl;
	std::cout << "data.s2: " << data.s2 << std::endl;
	std::cout << "data2.s1: " << data2->s1 << std::endl;
	std::cout << "data2.n: " << data2->n << std::endl;
	std::cout << "data2.s2: " << data2->s2 << std::endl;
	
	return 0;
}
