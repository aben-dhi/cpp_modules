/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:46:29 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/09 09:27:45 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_n = 0;
}

Span::Span(unsigned int n)
{
	_n = n;
}

Span::Span(Span const &s)
{
	*this = s;
}

Span &Span::operator=(Span const &s)
{
	_n = s._n;
	_v = s._v;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (_v.size() >= _n)
		throw std::exception();
	_v.push_back(n);
	std::cout << "number added : " << n << std::endl;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() + std::distance(begin, end) > _n)
		throw std::exception();
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan()
{
	if (_v.size() < 2)
		throw std::exception() ;
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (unsigned int i = 1; i < v.size() - 1; i++)
	{
		if (v[i + 1] - v[i] < min)
			min = v[i + 1] - v[i];
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() < 2)
		throw std::exception();
	std::vector<int> v = _v;
	std::sort(v.begin(), v.end());
	return v[v.size() - 1] - v[0];
}

unsigned int Span::getN() const
{
	return _n;
}

std::ostream &operator<<(std::ostream &o, Span const &s)
{
	o << s.getN() << std::endl;
	return o;
}