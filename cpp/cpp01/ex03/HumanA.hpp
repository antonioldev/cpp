/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:29:53 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 16:17:06 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_DOT_HPP
#define HUMAN_A_DOT_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& type;
public:
	HumanA(std::string str, Weapon& weapon);
	~HumanA();
	void attack(void);
};

#endif