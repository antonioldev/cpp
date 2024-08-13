/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:48:37 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 16:17:15 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_DOT_HPP
#define  HUMAN_B_DOT_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* type = NULL;
	public:
		HumanB(std::string str);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon& weapon);
};

#endif