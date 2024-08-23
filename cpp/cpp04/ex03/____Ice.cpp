/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:36:23 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 08:21:37 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : type("ice")
{
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(std::string const & type) : type(type)
{
	std::cout << type << " material created" << std::endl;
}

Ice::Ice(const Ice& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destroyed" << std::endl;
}

std::string const& Ice::getType() const//Returns the materia type
{
	return (this->type);
}

Ice* Ice::clone() const
{
	Ice new_ice = new Ice();
	new_ice = this;
	return (new_ice);
}

virtual void Ice::use(ICharacter& target)
{
	std::cout << target << " hit!" <<std::endl;/////////////////
}