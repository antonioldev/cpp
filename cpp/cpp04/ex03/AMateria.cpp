/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:36:23 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 08:07:17 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << type << " material created" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << other.getType() << " has been created" << std::endl;
	this->type = other.getType();
}

AMateria& AMateria::operator=(const AMateria& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destroyed" << std::endl;
}

std::string const& AMateria::getType() const//Returns the materia type
{
	return (this->type);
}

AMateria* AMateria::clone()
{
	//TODO
}

virtual void AMateria::use(ICharacter& target)
{
	std::cout << target << " hit!" <<std::endl;
}