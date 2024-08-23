/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:43 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 15:33:20 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << this->getType() << " has been created" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& other)
{
	std::cout << other.getType() << " has been copied" << std::endl;
	this->type = other.getType();
	this->brain = new Brain(*other.brain);
}
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
		delete(this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete(brain);
	std::cout << type << " has been killed!! :(" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Why does my " << type << " meow so much" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}