
#pragma once
#ifndef CHARACTER_DOT_HPP
#define CHARACTER_DOT_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria* slot[4];
	AMateria* floor[50];
	std::string name;
public:
	Character();
	Character(std::string new_name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif