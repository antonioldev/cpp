/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:06:43 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 17:06:45 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << this->getType() << " has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << type << " has been killed!! :(" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Why does my " << type << " suddenly quack quack" << std::endl;
}