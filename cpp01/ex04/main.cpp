/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:46:09 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/11/06 09:39:42 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void Sed(std::string filename, std::string s1, std::string s2)
{
    std::ifstream file(filename);
    std::string line;
    std::string new_file = filename + ".replace";
    std::ofstream new_file_stream(new_file);

    if (file.is_open() && new_file_stream.is_open())
    {
        while (std::getline(file, line))
        {
            std::string modified_line;
            size_t pos = 0;
            while (pos < line.length())
            {
                size_t found = line.find(s1, pos);
                if (found != std::string::npos)
                {
                    modified_line += line.substr(pos, found - pos);
                    modified_line += s2;
                    pos = found + s1.length();
                }
                else
                {
                    modified_line += line.substr(pos);
                    break;
                }
            }
            new_file_stream << modified_line << std::endl;
        }
        file.close();
        new_file_stream.close();
    }
    else
        std::cout << "Unable to open files" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./Sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	else
	{
		Sed(argv[1], argv[2], argv[3]);
        system("leaks Sed");
		return (0);
	}
}