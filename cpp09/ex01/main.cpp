/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:53:24 by aben-dhi          #+#    #+#             */
/*   Updated: 2024/07/22 23:23:22 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    try
    { 
        RPN r;
        std::string str = av[1];
        std::string tmp;
        std::stringstream ss(str);
    
        while (ss >> tmp)
        {
            r.do_op(tmp);
        }
    
        std::cout << r.get_result() << std::endl;
    }
    catch(const std::exception &e)
    {
	    std::cerr << e.what() << std::endl;
	    return 1;
    }
    return 0;
}
