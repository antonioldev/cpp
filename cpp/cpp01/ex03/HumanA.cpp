/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:34:03 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 16:17:50 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& weapon)  : name(str), type(weapon)
{
	
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << type.getType() << std::endl;
}

HumanA::~HumanA()
{
}