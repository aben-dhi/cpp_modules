/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:46:35 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/03 19:46:57 by aben-dhi         ###   ########.fr       */
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
	int shortestSpan();
	int longestSpan();
};

#endif