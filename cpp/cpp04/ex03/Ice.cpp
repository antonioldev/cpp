
#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	this->type = "ice";
	std::cout << type << " type have been created" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	this->type = other.getType();
	std::cout << "Copy constructor called for " << other.getType() << std::endl;	
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Copy assignment constructor called for " << other.getType() << std::endl;	
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << type << " type have been destroyed" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	this->type = "ice";
	std::cout << type << " type have been created" << std::endl;
}

std::string const& Ice::getType() const
{
	return (this->type);
}

Ice* Ice::clone() const
{
	Ice* clone_item = new Ice();
	return (clone_item);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" <<std::endl;
}