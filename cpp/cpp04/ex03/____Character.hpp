/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:02:32 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 08:39:30 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_DOT_HPP
#define  CHARACTER_DOT_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public Icharacter
{
public:
	~ICharacter() {}
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif