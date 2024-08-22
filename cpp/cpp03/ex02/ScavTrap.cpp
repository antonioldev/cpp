/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:31:30 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 11:59:50 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->name = "Unknow";
	this->hit = ClapTrap::hit;
	this->energy = 50;
	this->attack_p = 20;
	std::cout << "[ScavTrap] Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	this->name = new_name;
	this->hit = ClapTrap::hit;
	this->energy = 50;
	this->attack_p = 20;
	std::cout << "[ScavTrap] " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "[ScavTrap] " << "Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "[ScavTrap] " << "Copy assignment constructor called" << std::endl;	
	if (this != &other)
	{
		name = other.name;
		hit = other.hit;
		energy = other.energy;
		attack_p = other.attack_p;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (energy == 0)
		std::cout << "[ScavTrap] " << name << " has no energy points left" << std::endl;
	else if (hit == 0)
		std::cout << "[ScavTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy--;
		std::cout << "[ScavTrap] " << name << " attacks " <<  target <<  " causing " << attack_p << " points of damage!" << std::endl;	
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap] " << name << " is now in Gatekeeper mode" << std::endl;	
}