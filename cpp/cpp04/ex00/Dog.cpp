/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:43 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:00:35 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << this->getType() << " has been created" << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Dog::~Dog()
{
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