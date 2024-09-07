/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:53:35 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/13 20:36:02 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _result(0) {}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		_stack = other._stack;
		_result = other._result;
	}
	return *this;
}

RPN::~RPN() {}

int RPN::myStoi(const std::string &str)
{
	int res = 0;
	int sign = 1;
	int i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		else
			throw std::runtime_error("Error: invalid input");
		i++;
	}
	return res * sign;
}

void RPN::do_op(const std::string &str)
{
	if (str == "+" || str == "-" || str == "*" || str == "/")
	{
		if (_stack.size() < 2)
		{
			std::cerr << "Error: not enough operands" << std::endl;
			exit(EXIT_FAILURE);
		}
		int a = _stack.top();
		_stack.pop();
		int b = _stack.top();
		_stack.pop();
		if (str == "+")
			_stack.push(add(b, a));
		else if (str == "-")
			_stack.push(sub(b, a));
		else if (str == "*")
			_stack.push(mul(b, a));
		else if (str == "/")
			_stack.push(div(b, a));
	}
	else
	{
		try {
            _stack.push(myStoi(str));
        } catch (const std::invalid_argument& e) {
            throw std::runtime_error("Error: invalid input");
        }
	}
	if (!_stack.empty())
		_result = _stack.top();
}

int RPN::add(int a, int b)
{
	return a + b;
}

int RPN::sub(int a, int b)
{
	return a - b;
}

int RPN::mul(int a, int b)
{
	return a * b;
}

int RPN::div(int a, int b)
{
	if (b == 0)
		throw std::runtime_error("Error: division by zero");
	
	return a / b;
}

double RPN::get_result() const
{
	return _result;
}