/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:34:37 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 11:36:12 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_DOT_HPP
#define ZOMBIE_DOT_HPP

#include <string>
#include <sstream>
#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie*	zombieHorde( int N, std::string name );
	private:
		std::string name;
};

#endif