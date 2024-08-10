/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:34:37 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/07 10:04:45 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_DOT_HPP
#define ZOMBIE_DOT_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
	private:
		std::string name;
};
//Zombie(/* args */);
	//~Zombie();
	

#endif