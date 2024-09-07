/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:37:55 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/25 10:39:38 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
std::string getContainerName() {}

template <>
std::string getContainerName< std::vector<int> >() {
	return "vector<int>";
}

template <>
std::string getContainerName< std::deque<int> >() {
	return "deque<int>";
}

template <typename Container>
PmergeMe<Container>::PmergeMe() : _c(), _v(-1), _time(0) {}

template <typename Container>
PmergeMe<Container>::PmergeMe(char **av) : _c() {
	_v = -1;
	_time = 0;
	for (size_t i = 0; av[i]; i++) {
		if (!is_number(av[i]))
			throw std::invalid_argument("Invalid argument");
		_c.push_back(ft_stoa(av[i]));
	}
}

template <typename Container>
PmergeMe<Container>::PmergeMe(const PmergeMe &copy){
	_c = copy._c;
}

template <typename Container>
PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe &other) {
	if (this != &other) {
		_c = other._c;
		_v = other._v;
		_time = other._time;
	}
	return *this;
}

template <typename Container>
PmergeMe<Container>::~PmergeMe() {}

template <typename Container>
void PmergeMe<Container>::merge() {
	
	std::clock_t start = std::clock();
	
	p_vector p = pair_v(_c);
	vint id = ids(_c.size());
	
	if (p.size() == 0) {
		_c.push_back(_v);
		_time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
		return;
	}
	sort_pair(p);
	_c.clear();
	_c.push_back(p[0].second);
	
	for (size_type i = 0; i < p.size(); i++) {
		_c.push_back(p[i].first);
	}

	for (size_t i = 0; i < id.size(); i++) {
		if (size_t(id[i] - 1) >= p.size())
			continue;
		int index = binary_search(p[id[i] - 1].second);
		_c.insert(_c.begin() + index, p[id[i] - 1].second);
	}
	if (_v != -1)
	{
		int index = binary_search(_v);
		_c.insert(_c.begin() + index, _v);
	}
	_time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
}

template <typename Container>
typename PmergeMe<Container>::p_vector PmergeMe<Container>::pair_v(Container &c) {
	p_vector p;

	if (c.size() % 2 != 0) {
		_v = c.back();
		c.pop_back();
	}
	
	for (size_type i = 0; i < c.size(); i += 2) {
		
		if (c[i] < c[i + 1])
			std::swap(c[i], c[i + 1]);
		p.push_back(std::make_pair(c[i], c[i + 1]));
	}
	return p;
}

template <typename Container>
void PmergeMe<Container>::sort_pair(p_vector &pair) {
	if (pair.size() <= 1)
		return;	
	
	size_type mid = pair.size() / 2;
	p_vector left(pair.begin(), pair.begin() + mid);
	p_vector right(pair.begin() + mid, pair.end());
	
	sort_pair(left);
	sort_pair(right);

	size_type leftid = 0;
	size_type rightid = 0;
	size_type pairid = 0;

	while (leftid < left.size() && rightid < right.size())
		pair[pairid++] = (left[leftid].first < right[rightid].first) ? left[leftid++] : right[rightid++];

	while (leftid < left.size())
		pair[pairid++] = left[leftid++];
		
	while (rightid < right.size())
		pair[pairid++] = right[rightid++];
}

template <typename Container>
int PmergeMe<Container>::binary_search(int start) {
	int left = 0;
	int right = _c.size() - 1;
	
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (_c[mid] == start)
			return mid;
		if (_c[mid] < start)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return left;
}

template <typename Container>
vint PmergeMe<Container>::ids(size_t n) {
	vint id;
	int jacobsthal[n + 1];

	jacobsthal[0] = 0;
	jacobsthal[1] = 1;
	int lastjacob = 2;
	
	for (size_t i = 2; id.size() < n ; i++) {
		jacobsthal[i] = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
		i != 2 ? id.push_back(i) : (void)0;
		for (int j= jacobsthal[i] - 1; j > lastjacob; j--) {
			id.push_back(j);
		}
		lastjacob = jacobsthal[i];
	}
	return id;
}

template <typename Container>
void PmergeMe<Container>::print() const {
	for (size_t i = 0; i < _c.size(); i++) {
		std::cout << _c[i] << " ";
	}
	std::cout << std::endl;
}

template <typename Container>
void PmergeMe<Container>::print_time() const {
	std::cout
            <<	"Time to process a range of " << _c.size()
            << " elements with std::" << getContainerName< Container >()
            << " : " << std::fixed << std::setprecision(5) << _time << " us"
            << std::endl;
}

template <typename Container>
int PmergeMe<Container>::ft_stoa(const std::string &s) {
	std::istringstream  ss(s);
    int                 number;

    ss >> number; // Convert the string

    return (number);
}

template <typename Container>
bool PmergeMe<Container>::is_number(const std::string &s) {
	if (s.empty() || s[0] == '-') {
        return false;
    }

    size_t i = 0;

    if (s[0] == '+' && s.length() == 1) {
        return false;
    } else if (s[0] == '+') {
        i++;
    }

    for (; i < s.length(); i++) {
        if (!std::isdigit(s[i])) {
            return false;
        }
    }

    return true;
}

template class PmergeMe< std::vector<int> >;
template class PmergeMe< std::deque<int> >;