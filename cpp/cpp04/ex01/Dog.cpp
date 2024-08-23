/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:43 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 14:26:32 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << this->getType() << " has been created" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
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

Dog::~Dog()
{
	delete(brain);
	std::cout << type << " has been killed!! :(" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " is barking!" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}