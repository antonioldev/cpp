/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:54:12 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 16:17:28 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)  : name(str)
{
	type = 0;
}

void HumanB::attack(void)
{
	if (type)
		std::cout << name << " attacks with their " << type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	type = &weapon;
}

HumanB::~HumanB()
{
}