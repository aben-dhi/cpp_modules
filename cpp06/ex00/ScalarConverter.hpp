/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:07:28 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/04/29 20:08:00 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
private:
	std::string _input;
public:
	ScalarConverter(std::string input);
	ScalarConverter(ScalarConverter const &src);
	~ScalarConverter();
	ScalarConverter &operator=(ScalarConverter const &src);
	void convert();
};

#endif