/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:58:28 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 15:52:39 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("Unknow"), hit(100), energy(10), attack_p(0)
{
	std::cout << "[ClapTrap] Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hit(100), energy(10), attack_p(0)
{
	std::cout << "[ClapTrap] " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hit(other.hit), energy(other.energy), attack_p(other.attack_p)
{
	std::cout << "[ClapTrap] " << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "[ClapTrap] " << "Copy assignment constructor called" << std::endl;	
	if (this != &other)
	{
		name = other.name;
		hit = other.hit;
		energy = other.energy;
		attack_p = other.attack_p;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy == 0)
		std::cout << "[ClapTrap] " << name << " has no energy points left" << std::endl;
	else if (hit == 0)
		std::cout << "[ClapTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy--;
		std::cout << "[ClapTrap] " << name << " attacks " <<  target <<  " causing " << attack_p << " points of damage!" << std::endl;	
	}
}

void ClapTrap::takeDamage(int amount)
{
	if (amount < 0)
	{
		std::cout << "Attack point must be positive!" << std::endl;
		return ;
	}
	if (amount > hit)
		hit = 0;
	else	
		hit -= amount;
	std::cout << "[ClapTrap] " << name << " get hit of " <<  amount << ", its health is " << hit << std::endl;
}

void ClapTrap::beRepaired(int amount)
{
	if (amount < 0)
	{
		std::cout << "Repair point must be positive!" << std::endl;
		return ;
	}
	if (energy == 0)
		std::cout << "[ClapTrap] " << name << " has no energy points left" << std::endl;
	else if (hit == 0)
		std::cout << "[ClapTrap] " << name << " has no hit points left" << std::endl;
	else
	{
		energy--;
		hit += amount;
		std::cout << "[ClapTrap] " << name << " health regenerating by " <<  amount <<" health is " << hit <<  std::endl;
	}
}