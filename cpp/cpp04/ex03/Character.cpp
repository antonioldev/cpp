#include "Character.hpp"

Character::Character()
{
	this->name = "Unknow";
	for (int i=0; i < 4; i++)
		slot[i] = 0;
	std::cout << this->name << " [character] has been created";
}

Character::Character(std::string new_name)
{
	this->name = new_name;
	for (int i=0; i < 4; i++)
		slot[i] = 0;
	std::cout << this->name << " [character] has been created" << std::endl;
}

Character::Character(const Character& other)
{
	this->name = other.name;
	// for (int i=0; i < 4; i++)
	// 		slot[i] = other.slot[i]
	for (int i=0; i < 4; i++)
		if (this->slot[i] != 0)
			delete slot[i];
	for (int i=0; i < 4; i++)
		if (other.slot[i] != 0)
			(this->slot)[i] = (other.slot[i])->clone();
	std::cout << this->name << " [character] has been copied" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name = other.name;
		// for (int i=0; i < 4; i++)
		// 	slot[i] = other.slot[i];
		for (int i=0; i < 4; i++)
			if (this->slot[i] != 0)
				delete slot[i];
		for (int i=0; i < 4; i++)
			if (other.slot[i] != 0)
				(this->slot)[i] = (other.slot[i])->clone();
	}
	std::cout << this->name << " [character] has been copied assigned" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i=0; i < 4; i++)
		if (slot[i] != 0)
			delete slot[i];
	std::cout << this->name << " [character] has been destroied" << std::endl;
}

std::string const& Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	for (int i=0; i < 4; i++)
	{
		if (slot[i] == 0)
		{
			slot[i] = m;
			return ;
		}
	}
		
}

void Character::unequip(int idx)
{
	// AMateria *ptr = (this->slot)[idx];
	if (idx >= 0 && idx <= 3)
	{
		if (this->slot[idx] != 0)
		{
			AMateria *ptr = this->slot[idx];
			std::cout << ptr->getType() << " have been unequipped" <<std::endl;
		}
		this->slot[idx] = 0;
	}
		
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (slot[idx] != 0)
			slot[idx]->use(target);
	}
}