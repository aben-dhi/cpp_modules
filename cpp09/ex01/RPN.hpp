/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:46:39 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/12 13:27:04 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>

class RPN
{
	private:
		std::stack<double> _stack;
		double _result;
		
			
	public:
		RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &other);
		~RPN();
		void do_op(const std::string &str);
		double get_result() const;
		int add(int a, int b);
		int sub(int a, int b);
		int mul(int a, int b);
		int div(int a, int b);
		int myStoi(const std::string &str);
};

#endif