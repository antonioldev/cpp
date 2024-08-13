/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:11:37 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 14:19:51 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std :: cout << "Address of string :"  << &string << std :: endl;
	std :: cout << "Address of stringPTR :"  << stringPTR << std :: endl;
	std :: cout << "Address of stringREF :"  << &stringREF << std :: endl;

	std :: cout << "Value of string :"  << string << std :: endl;
	std :: cout << "Value of stringPTR :"  << *stringPTR << std :: endl;
	std :: cout << "Value of stringREF :"  << stringREF << std :: endl;
	
	return (0);
}