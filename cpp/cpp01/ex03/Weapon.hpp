/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:53:41 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 15:20:49 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_DOT_HPP
#define WEAPON_DOT_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		void setType(std::string newType);
		std::string& getType(void);
		Weapon(std::string type);
		~Weapon();
};

#endif