/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:23:56 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/12 11:42:58 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

typedef std::string string;

class BitcoinExchange
{
	private:
		std::map<string, string> _data;
		
		string trim(const string &str);
		string get_date_p(const string &line);
		string get_date_n(const string &line);
		void validate(const string &line);
		bool file_exists(const string &filename);
		bool is_empty(const string &filename);
		bool leap_year(int year);
		bool v_date(const string &date);
		bool check(const string &date, int(*isdigit)(int));
		int	ft_stoi(const string &str);
		double ft_stod(const string &str);
		string ft_itos(int n);
		

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();
		void run(const string &filename);
};

#endif