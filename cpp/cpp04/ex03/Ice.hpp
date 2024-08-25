
#pragma once
#ifndef ICE_DOT_HPP
#define ICE_DOT_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	~Ice();

	Ice(std::string const & type);
	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif