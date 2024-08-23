/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:07:33 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:09:04 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << this->getType() << " has been created" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << type << " is mute" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}