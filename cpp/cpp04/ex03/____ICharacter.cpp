/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 08:32:57 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 08:37:57 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

virtual ~ICharacter()
{
	std::cout << "Pure absstract class CHARACTER has been destroied" << std::endl;
}
// virtual std::string const & getName();
// virtual void equip(AMateria* m);
// virtual void unequip(int idx);
// virtual void use(int idx, ICharacter& target);