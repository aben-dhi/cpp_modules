/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:38:15 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/13 18:59:42 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <iomanip>
#include <ctime>
#include <sstream>

typedef std::vector<int> vint;

template <typename Container>
class PmergeMe {
	
	public:
		typedef typename Container::value_type value_type;
		typedef typename Container::size_type size_type;
		typedef std::pair <value_type, value_type> pair;
		typedef std::vector <pair> p_vector;
		
		PmergeMe();
		explicit PmergeMe(char **av);
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		void merge();
		void print() const;
		void print_time() const;
		
	private:
		Container _c;
		value_type _v;
		double _time;
		
		vint ids(size_t n);
		p_vector pair_v(Container &_c);
		void sort_pair(p_vector &pair);
		int binary_search(int start);
		int ft_stoa(const std::string &s);
		bool is_number(const std::string &s);
		

};

#endif