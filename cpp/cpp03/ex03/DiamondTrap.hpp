/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:43:09 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/16 16:17:51 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_DOT_HPP
#define DIAMOND_TRAP_DOT_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
public:
	DiamondTrap(void);
	~DiamondTrap();
	DiamondTrap(std::string new_name);
	// DiamondTrap(const DiamondTrap& other);
	// DiamondTrap& operator=(const DiamondTrap& other);
	void attack(const std::string& target);
};

#endif