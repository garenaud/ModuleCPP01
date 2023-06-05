/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:55:23 by grenaud-          #+#    #+#             */
/*   Updated: 2023/06/05 19:41:02 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replaceStr(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cerr << "Error opening file " << filename << std::endl;
		return;
	}
	std::string outputFile = filename + ".replace";
	std::ofstream outputFileStream(outputFile.c_str());
	if (!outputFileStream.is_open())
	{
		std::cerr << "Error creating file " << outputFile << std::endl;
		return;
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t	startPos = 0;
		size_t	foundPos = line.find(s1, startPos);
		while (foundPos != std::string::npos)
		{
			outputFileStream << line.substr(startPos, foundPos - startPos) << s2;
			startPos = foundPos + s1.length();
			foundPos = line.find(s1, startPos);
		}
		outputFileStream << line.substr(startPos) << std::endl;
	}
	std::cout << "The file " << filename << " has been processed successfully. The result has been saved in " << outputFile << std::endl;
}

int	main(int argc, char *argv[])
{
	    if (argc != 4) 
	{
        std::cerr << "Usage: ./program <filename> <s1> <s2>" << std::endl;
        return 1;
    }
	std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    replaceStr(filename, s1, s2);
    return 0;
}
