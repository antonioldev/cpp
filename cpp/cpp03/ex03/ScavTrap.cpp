/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:23:00 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/16 16:16:05 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "[ScavTrap] Default constuctor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	energy_points = 50;
	attack_damage = 20;
	std::cout << "[ScavTrap] " << name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << name << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "[ScavTrap] " << "Copy constructor called" << std::endl;
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	// *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "[ScavTrap] " << "Copy Assignment constructor called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)// : ClapTrap(target)
{
	if (energy_points == 0)
		std::cout << "[ScavTrap] " << name << " has no energy points left" << std::endl;
	else if (hit_points == 0)
		std::cout << "[ScavTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy_points--;
		std::cout << "[ScavTrap] " << name << " attacks " <<  target <<  " causing " << attack_damage << " points of damage!" << std::endl;	
	}
}


void ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap] " << name << " is now in Gatekeeper mode" << std::endl;	
}