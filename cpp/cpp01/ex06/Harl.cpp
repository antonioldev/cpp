/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:35:12 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 10:46:56 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
	int	i = -1;
	int	j;
	void	(Harl::*arr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (j = 0; j < 4; j++)
		if (level == msg[j])
			i = j;
	switch (i) 
	{
		case 0:
			(this->*(arr[i++]))();
		case 1:
    		(this->*(arr[i++]))();
		case 2:
    		(this->*(arr[i++]))();
		case 3:
    		(this->*(arr[i++]))();
		default :
			std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
	}
}