/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:08:02 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/06/12 10:27:56 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string input) : _input(input)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
	if (this != &src)
	{
		_input = src._input;
	}
	return *this;
}

void ScalarConverter::convert()
{
	std::cout << "char: ";
	try
	{
		int i = std::stoi(_input);
		if (i < 32 || i > 126)
			throw std::exception();
		if (i < 0 || i > 127)
			throw std::exception();
		if (i < 32 || i > 126)
			throw std::exception();
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}

	std::cout << "int: ";
	try
	{
		int i = std::stoi(_input);
		std::cout << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}

	std::cout << "float: ";
	try
	{
		float f = std::stof(_input);
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}

	std::cout << "double: ";
	try
	{
		double d = std::stod(_input);
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}