/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:45:21 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/06/27 10:04:29 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(new T()), _size(0) {}
		Array(unsigned int n) : _array(new T[n]()), _size(n) {}
		Array(Array const &src) : _array(new T[src._size]()), _size(src._size)
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
		}
		~Array()
		{
			delete [] _array;
		}
		Array &operator=(Array const &src)
		{
			if (this != &src)
			{
				delete [] _array;
				_array = new T[src._size]();
				_size = src._size;
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = src._array[i];
			}
			return *this;
		}
		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		}
		unsigned int size() const
		{
			return _size;
		}
};

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &src)
{
	for (unsigned int i = 0; i < src.size(); i++)
		out << src[i] << " ";
	return out;
}

#endif