/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:46:35 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/09 09:26:09 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
private:
	unsigned int _n;
	std::vector<int> _v;
public:
	Span();
	Span(unsigned int n);
	Span(Span const &s);
	Span &operator=(Span const &s);
	~Span();
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	unsigned int getN() const;
};
std::ostream &operator<<(std::ostream &o, Span const &s);

#endif