/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:41:25 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 15:20:05 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unknow_clap_trap")
{
	this->name = "Unknow";
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->attack_p = FragTrap::attack_p;
	std::cout << "[DiamondTrap] Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newname) : ClapTrap(newname + "_clap_trap")
{
	this->name = newname;
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->attack_p = FragTrap::attack_p;
	std::cout << "[DiamondTrap] " << name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] " << name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other)
{
	this->name = other.name;
	this->hit = other.hit;
	this->energy = other.energy;
	this->attack_p = other.attack_p;
	std::cout << "[DiamondTrap] " << "Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "[DiamondTrap] " << "Copy assignment constructor called" << std::endl;	
	if (this != &other)
	{
		name = other.name;
		hit = other.hit;
		energy = other.energy;
		attack_p = other.attack_p;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name << std::endl;
	std::cout << "My parent name is " << ClapTrap::name << std::endl;
}