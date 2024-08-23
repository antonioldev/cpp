/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:28:05 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/21 12:37:31 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_DOT_HPP
#define FRAG_TRAP_DOT_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string new_name);
	~FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif