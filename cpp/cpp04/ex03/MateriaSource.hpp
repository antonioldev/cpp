/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:06:29 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 09:45:12 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_RESOURCE_DOT_HPP
#define  MATERIA_RESOURCE_DOT_HPP

#include <iostream>
// #include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
// protected:
// 	AMateria* resource[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	~MateriaSource() {}
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif