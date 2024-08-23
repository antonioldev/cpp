/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 08:39:56 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 08:47:36 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

~ICharacter()
{}

std::string const & getName() const
{}

void equip(AMateria* m)
{}

void unequip(int idx)
{}

void use(int idx, ICharacter& target)
{}