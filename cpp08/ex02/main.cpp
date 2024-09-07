/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:52:41 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/08 18:24:54 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

//another main to test everything thoroughly
// int	main()
// {
// 	MutantStack<int> mstack;
// 	std::cout << "---------------------------------------------------" << std::endl;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << "Top: " << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << "Size: " << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	std::cout << "---------------------------------------------------" << std::endl;
// 	std::cout << "vector test" << std::endl;
// 	std::cout << "---------------------------------------------------" << std::endl;
// 	std::vector<int> v;
// 	v.push_back(5);
// 	v.push_back(17);
// 	std::cout << "vector Top: " << v.back() << std::endl;
// 	v.pop_back();
// 	std::cout << "vector Size: " << v.size() << std::endl;
// 	v.push_back(3);
// 	v.push_back(5);
// 	v.push_back(737);
// 	v.push_back(0);
// 	std::vector<int>::iterator itv = v.begin();
// 	std::vector<int>::iterator itve = v.end();
// 	++itv;
// 	--itv;
// 	while (itv != itve)
// 	{
// 		std::cout << *itv << std::endl;
// 		++itv;
// 	}
// 	std::vector<int> v2(v);
// 	std::cout << "---------------------------------------------------" << std::endl;
// 	return 0;
// }