/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:26:30 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/02 13:21:56 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string str;
	PhoneBook phonebook;
    
    // phonebook.contact_avaible = 0;
    while (str != "EXIT" && !std::cin.eof())
    {
        std :: cout << "What do you need? ADD / SEARCH / EXIT? ";
        std :: cin >> str;
        if (str == "ADD")
            phonebook.add_contact();
        else if (str == "SEARCH")
            phonebook.serch_contact();
    }
    return (0);
}