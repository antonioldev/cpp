/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:07:33 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 16:52:33 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << this->getType() << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " has been destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << type << " makes weird noises" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}