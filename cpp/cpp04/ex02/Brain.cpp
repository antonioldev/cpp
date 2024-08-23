/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:20:49 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 08:29:31 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been created" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i=0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain has been copied" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i=0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain has been copy assigned" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
}