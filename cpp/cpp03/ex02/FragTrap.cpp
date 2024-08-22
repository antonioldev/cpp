/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:31:30 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 15:19:47 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->name = "Unknow";
	this->hit = ClapTrap::hit;
	this->energy = 100;
	this->attack_p = 30;
	std::cout << "[FragTrap] Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	this->name = new_name;
	this->hit = ClapTrap::hit;
	this->energy = 100;
	this->attack_p = 30;
	std::cout << "[FragTrap] " << name << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << name << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "[FragTrap] " << "Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "[FragTrap] " << "Copy assignment constructor called" << std::endl;	
	if (this != &other)
	{
		name = other.name;
		hit = other.hit;
		energy = other.energy;
		attack_p = other.attack_p;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (energy == 0)
		std::cout << "[FragTrap] " << name << " has no energy points left" << std::endl;
	else if (hit == 0)
		std::cout << "[FragTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy--;
		std::cout << "[FragTrap] " << name << " attacks " <<  target <<  " causing " << attack_p << " points of damage!" << std::endl;	
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] " << name << " gives you high 5!" << std::endl;		
}
