/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:33:57 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 10:38:00 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std :: string name;

	Zombie zombie;
	std :: cout << "What's the zombie name? :";
	std :: cin >> name;
	zombie.randomChump(name);
	// Stack Allocation: 
	// 	Use it for small
	// 	Short-lived objects with a well-defined scope and predictable lifetime
	// 	It offers better performance and automatic cleanup.
	std :: cout << "How do you want to call the second zombie? :";
	std :: cin >> name;
	Zombie*	newZombie = zombie.newZombie(name);
	newZombie->announce();
	delete (newZombie);
	// Heap Allocation:
	// 	Use it for objects that need dynamic or extended lifetimes
	// 	Large objects, or when manual control over memory is necessary.
	// 	Smart pointers can help manage heap allocations to prevent memory leaks.
	return (0);
}