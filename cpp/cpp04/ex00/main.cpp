/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:47:58 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 07:52:46 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "\033[31m-- CONSTRUCTOR --\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\033[31m\n-- ACTION --\033[0m" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\033[31m\n-- DECONSTRUCTOR --\033[0m" << std::endl;
	delete(meta);
	delete(j);
	delete(i);

	std::cout << "\033[31m\n-- WRONG ANIMAL TEST --\033[0m" << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	wrong_cat->makeSound();
	wrong_animal->makeSound();

	delete (wrong_cat);
	delete (wrong_animal);

	return (0);
}