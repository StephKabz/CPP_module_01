/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:42:07 by kingstephan       #+#    #+#             */
/*   Updated: 2025/12/30 18:32:05 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>

std::string	replaceString(std::string line, std::string string1, std::string string2)
{
	size_t	pos = 0;
	while ((pos = line.find(string1, pos)) != std::string::npos)
	{
		line.erase(pos, string1.length());
		line.insert(pos, string2);
		pos += string2.length();
	}
	return (line);
}

int	main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		std:: cout << "Use -> ./replace fileName string1 string2!" << std::endl;
		return (1);
	}
	std::string	fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream	inputFile(fileName);
	if (!inputFile.is_open())
	{
		std::cout << "Error! Could not open file!" << std::endl;
		return (1);
	}
	std::cout << "File open successfully" << std::endl;
	std::ofstream	outputFile(fileName + ".replace");
	if (!outputFile.is_open())
	{
		std::cout << "Could not open output file!" << std::endl;
		inputFile.close();
		return (1);
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		outputFile << replaceString(line, s1, s2) << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}