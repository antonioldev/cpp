/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:23:00 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/16 16:15:46 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[FragTrap] Default constuctor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	energy_points = 100;
	attack_damage = 30;
	std::cout << "[FragTrap] " << name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "[FragTrap] " << "Copy constructor called" << std::endl;
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	// *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "[FragTrap] " << "Copy Assignment constructor called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)// : ClapTrap(target)
{
	if (energy_points == 0)
		std::cout << "[FragTrap] " << name << " has no energy points left" << std::endl;
	else if (hit_points == 0)
		std::cout << "[FragTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy_points--;
		std::cout << "[FragTrap] " << name << " attacks " <<  target <<  " causing " << attack_damage << " points of damage!" << std::endl;	
	}
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] " << name << " HIGH FIVE mode" << std::endl;	
}