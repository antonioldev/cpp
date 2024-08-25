
#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->type = "cure";
	std::cout << type << " type have been created" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	this->type = other.getType();
	std::cout << "Copy constructor called for " << other.getType() << std::endl;	
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << type << " type have been destroyed" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	this->type = "cure";
	std::cout << type << " type have been created" << std::endl;
}

std::string const& Cure::getType() const
{
	return (this->type);
}

Cure* Cure::clone() const
{
	Cure* clone_item = new Cure();
	return (clone_item);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<"’s wounds *" <<std::endl;
}