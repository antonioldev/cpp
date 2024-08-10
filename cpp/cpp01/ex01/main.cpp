/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:33:57 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 11:40:34 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std :: string name = "Zombie ";

	Zombie zombie;
	Zombie* horde = zombie.zombieHorde(20, name);
	for (int i=0; i < 20; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}