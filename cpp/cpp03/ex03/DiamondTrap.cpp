/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:56:07 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/16 16:52:00 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <stdio.h>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "[DiamondTrap] Default constuctor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] " << name << " has been destroyed" << std::endl;
}

// DiamondTrap::DiamondTrap(std::string new_name) : ClapTrap(new_name), FragTrap(new_name), ScavTrap(new_name)
{
	name = new_name + "name";//FIX
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "[DiamondTrap] " << name << " has been created" << std::endl;
	printf("1-> %i - %i - %i\n", hit_points, energy_points, attack_damage);	
}

//A(B::x, C::y, B::z)

// DiamondTrap::DiamondTrap(const DiamondTrap& other) : FragTrap(other), ScavTrap(other)
// {
// 	std::cout << "[DiamondTrap] " << "Copy constructor called" << std::endl;
// 	name = other.name;
// 	hit_points = other.hit_points;
// 	energy_points = other.energy_points;
// 	attack_damage = other.attack_damage;
// 	
// }

// DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
// {
// 	std::cout << "[DiamondTrap] " << "Copy Assignment constructor called" << std::endl;
// 	if (this != &other)
// 	{
// 		name = other.name;
// 		hit_points = other.hit_points;
// 		energy_points = other.energy_points;
// 		attack_damage = other.attack_damage;
// 	}
// 	
// 	return (*this);
// }

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	// if (energy_points == 0)
	// 	std::cout << "[DiamondTrap] " << name << " has no energy points left" << std::endl;
	// else if (hit_points == 0)
	// 	std::cout << "[DiamondTrap] " << name << " has no hit points left" << std::endl;
	// else
	// {
	// 	energy_points--;
	// 	std::cout << "[DiamondTrap] " << name << " attacks " <<  target <<  " causing " << attack_damage << " points of damage!" << std::endl;	
	// }
}