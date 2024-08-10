/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:15:12 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 10:17:10 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie :: newZombie(std::string name)
{
	Zombie*	newZ;

	newZ = new Zombie;
	newZ->name = name;
	return (newZ);
}