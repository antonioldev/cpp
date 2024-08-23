/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:01:18 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 08:11:09 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_DOT_HPP
#define ICE_DOT_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMaterial
{
	// protected:
	// 	std::string type;
	public:
		Ice();
		Ice(std::string const & type);
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		~Ice();
		std::string const & getType() const;
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif