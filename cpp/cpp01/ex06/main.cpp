/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:41:23 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/08 10:42:22 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	std::string level;
	std::cout<<"What Level? DEBUG, INFO, WARNING, ERROR"<<std::endl;
	std::cin>>level;
	
	harl.complain(level);
	return (0);
}