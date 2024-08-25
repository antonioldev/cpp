
#pragma once
#ifndef CURE_DOT_HPP
#define CURE_DOT_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
	~Cure();

	Cure(std::string const & type);
	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif