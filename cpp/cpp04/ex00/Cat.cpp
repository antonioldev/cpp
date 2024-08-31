/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:43 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/30 15:57:18 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << this->getType() << " has been created" << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << type << " has been killed!! :(" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[" << type << "] meow meow!" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}