/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:41:13 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/21 13:25:29 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string const &file)
{
	this->parsecsv(file);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &s)
{
	*this = s;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &s)
{
	(void)s;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::parsecsv(std::string const &file)
{
	std::ifstream ifs(file);
	std::string line;
	std::string word;
	std::vector<std::string> v;
	std::map<std::string, double> m;
	std::map<std::string, double>::iterator it;
	std::string date;
	double price;

	if (!ifs.is_open())
	{
		std::cerr << "Error: file not found" << std::endl;
		return;
	}
	while (std::getline(ifs, line))
	{
		std::stringstream ss(line);
		while (std::getline(ss, word, ','))
			v.push_back(word);
		date = v[0];
		price = std::stod(v[1]);
		m[date] = price;
		v.clear();
	}
	for (it = m.begin(); it != m.end(); it++)
		std::cout << it->first << " " << it->second << std::endl;
	
	ifs.close();
}

void BitcoinExchange::parsewallet(std::string const &file)
{
	std::ifstream ifs(file);
	std::string line;
	std::string word;
	std::vector<std::string> v;
	double btc;
	double money;

	if (!ifs.is_open())
	{
		std::cerr << "Error: file not found" << std::endl;
		return;
	}
	while (std::getline(ifs, line))
	{
		std::stringstream ss(line);
		while (std::getline(ss, word, ','))
			v.push_back(word);
		btc = std::stod(v[0]);
		money = std::stod(v[1]);
		v.clear();
	}
	ifs.close();
}
 
 void	BitcoinExchange::convert(std::string const &date, double btc)
 {
	
 }