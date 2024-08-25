#pragma once
#ifndef MATERIA_SOURCE_DOT_HPP
#define MATERIA_SOURCE_DOT_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	slot[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const& other);
	~MateriaSource();
	MateriaSource & operator=(MateriaSource const& other);
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const& type);
};

#endif