#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia source was created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->slot[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.slot[i])
			this->slot[i] = (other.slot[i])->clone();
	}
	std::cout << "Materia source was created from copy" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->slot[i])
			delete this->slot[i];
		if (other.slot[i])
			this->slot[i] = (other.slot[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slot[i])
			delete this->slot[i];
	}
	std::cout << "Materia source was destoryed" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while ((this->slot)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Inventory for materia source full!!" << std::endl;
		return ;
	}
	(this->slot)[i] = m;
	std::cout << "Materia " << m->getType() << " learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	int i = 0;

	while ((this->slot)[i] && ((this->slot)[i])->getType() != type && i < 4)
		i++;	
	if (i >= 4 || !(this->slot)[i])
	{
		std::cout << type << " materia does not exit" << std::endl;
		return (NULL);
	}
	std::cout << "Materia " << type << " created" << std::endl;
	return (((this->slot)[i])->clone());
}