/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alimotta <alimotta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:44:42 by alimotta          #+#    #+#             */
/*   Updated: 2024/08/23 09:45:50 by alimotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource();
MateriaSource::MateriaSource(const MateriaSource& other);
MateriaSource::MateriaSource& operator=(const MateriaSource& other);
MateriaSource::~MateriaSource() {}
void MateriaSource::learnMateria(AMateria*);
AMateria* MateriaSource::createMateria(std::string const & type);