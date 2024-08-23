/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:47:58 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 15:20:07 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "\033[31m-- CONSTRUCTOR --\033[0m" << std::endl;
	int count = 6;
	Animal* animals[count];
	int i;
	for (i=0; i < count; i++)
	{
		if (i < (count / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	std::cout << "\033[31m\n-- ACTION --\033[0m" << std::endl;
	for (i=0; i < count; i++)
		animals[i]->makeSound();
	
	
	std::cout << "\033[31m\n-- DECONSTRUCTOR --\033[0m" << std::endl;
	for (i=0; i < count; i++)
		delete (animals[i]);
	
	// Animal x;
	// x.makeSound();
}