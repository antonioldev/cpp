/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:35:12 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 10:24:00 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "1 - I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
}

void	Harl::info(void)
{
	std::cout << "2 - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::warning(void)
{
	std::cout << "3 - I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void	Harl::error(void)
{
	std::cout << "4 - This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain(std::string level)
{
	void	(Harl::*arr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == msg[i])
		{
			(this->*arr[i])();
			return ;
		}
	}
	std::cerr << "ERROR - THIS IS NOT HOW HARL COMPLAIN!" << std::endl;
}