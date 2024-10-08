
#pragma once
#ifndef I_MATERIA_SOURCE_DOT_HPP
#define  I_MATERIA_SOURCE_DOT_HPP

#include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif