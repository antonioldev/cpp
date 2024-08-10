/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:12:11 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 08:22:18 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string& inputFileName, const std::string& searchStr, const std::string& replaceStr)
		: inputFileName(inputFileName), searchStr(searchStr), replaceStr(replaceStr), outputFileName(inputFileName + ".replace") {}
	

bool FileReplacer::process()
{
	std::ifstream infile(inputFileName.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: Couldn't open input file '" << inputFileName << "'" << std::endl;
		return (false);
	}
	std::ofstream outfile(outputFileName.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Couldn't open output file '" << outputFileName << "'" << std::endl;
		return (false);
	}
	std::string line;
	while (std::getline(infile, line))
	{
		std::string modifiedLine;
		size_t pos = 0;
		while ((pos = line.find(searchStr)) != std::string::npos)
		{
			modifiedLine += line.substr(0, pos) + replaceStr;
			line = line.substr(pos + searchStr.length());
		}
		modifiedLine += line;
		outfile << modifiedLine << std::endl;
	}
	infile.close();
	outfile.close();
	return (true);
}
