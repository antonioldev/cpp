/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:11:12 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 08:24:43 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Only 3 parameters are allowed" << std::endl;
		std::cerr << "[1] File name - [2] Word to replace - [3] Word replacer" << std::endl;
		return (1);
	}
	std::string inputFileName = argv[1];
	std::string searchStr = argv[2];
	std::string replaceStr = argv[3];
	FileReplacer replacer(inputFileName, searchStr, replaceStr);
	if (!replacer.process())
		return (1);
	return (0);
}

