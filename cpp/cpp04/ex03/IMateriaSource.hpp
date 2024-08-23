/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:06:29 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 09:42:41 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_DOT_HPP
#define  I_MATERIA_SOURCE_DOT_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
protected:
	AMateria* resource[4];
public:
	// IMateriaSource();
	// IMateriaSource(const IMateriaSource& other);
	// IMateriaSource& operator=(const IMateriaSource& other);
	virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif