/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:31:16 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/16 09:12:53 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Unknow"), hit_points(0), energy_points(0), attack_damage(0) 
{
	std::cout << "[ClapTrap] Default constuctor" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hit_points(100), energy_points(10), attack_damage(0) 
{
	std::cout << "[ClapTrap] " << name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] " << name << " has been destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "[ClapTrap] " << "Copy constructor called" << std::endl;
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	// *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "[ClapTrap] " << "Copy Assignment constructor called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_points == 0)
		std::cout << "[ClapTrap] " << name << " has no energy points left" << std::endl;
	else if (hit_points == 0)
		std::cout << "[ClapTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy_points--;
		std::cout << "[ClapTrap] " << name << " attacks " <<  target <<  " causing " << attack_damage << " points of damage!" << std::endl;	
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > hit_points)
		hit_points = 0;
	else	
		hit_points -= amount;
	std::cout << "[ClapTrap] " << name << " get hit of " <<  amount << ", its health is " << hit_points  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points == 0)
		std::cout << "[ClapTrap] " << name << " has no energy points left" << std::endl;
	else if (hit_points == 0)
		std::cout << "[ClapTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy_points--;
		hit_points += amount;
		std::cout << "[ClapTrap] " << name << " health regenerating by " <<  amount <<" health is " << hit_points <<  std::endl;
	}
}