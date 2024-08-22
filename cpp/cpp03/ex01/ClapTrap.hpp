/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:53:50 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/22 15:50:15 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_DOT_HPP
#define CLAP_TRAP_DOT_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int	hit;
	int	energy;
	int	attack_p;
	
public:
	ClapTrap(void);
	ClapTrap(std::string new_name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(int amount);
	void beRepaired(int amount);
};

#endif