/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:41:10 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

//this class is a simple exchange that will allow you to buy and sell bitcoins
//we will parse w csv file and then we will be able to buy and sell bitcoins according to the csv file and txt file
//the csv file will contain the price of the bitcoin at a certain time
//the txt file will contain the amount of bitcoins you have and the amount of money you have

//You have to create a program which outputs the value of a certain amount of bitcoin
//on a certain date.
//This program must use a database in csv format which will represent bitcoin price
//over time. This database is provided with this subject.
//The program will take as input a second database, storing the different prices/dates
//to evaluate.
//The program will output the value of the amount of bitcoin on the date given in the second database.

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(std::string const &file);
		BitcoinExchange(BitcoinExchange const &s);
		BitcoinExchange &operator=(BitcoinExchange const &s);
		~BitcoinExchange();
		void parsecsv(std::string const &file);
		void parsefile(std::string const &file);
		
	
		
};

#endif