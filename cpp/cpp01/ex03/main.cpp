/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:12:18 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 16:18:08 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}

// Reference to Weapon:
// This is used when we want to ensure that the Weapon instance
// exists for the entire lifetime of the object using it. 
// This is suitable for HumanA, which always has a weapon.

// Pointer to Weapon:
// This allows flexibility where the Weapon may or may not be assigned.
// This is suitable for HumanB, which might not always have a weapon.