/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:11:33 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 08:21:06 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_REPLACER_DOT_HPP
#define FILE_REPLACER_DOT_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <cstring>
class FileReplacer
{
public:
	FileReplacer(const std::string& inputFileName, const std::string& searchStr, const std::string& replaceStr);
	bool process(void);
	
private:
	std::string inputFileName;
	std::string searchStr;
	std::string replaceStr;
	std::string outputFileName;
};

#endif