
#include "AMateria.hpp"

AMateria::AMateria() : type("Unknow")
{
	// std::cout << type << " type have been created" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	this->type = other.type;
	std::cout << "Copy constructor called for " << other.getType() << std::endl;	
}

AMateria& AMateria::operator=(const AMateria& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << type << " type have been destroyed" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << type << " type have been created" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}