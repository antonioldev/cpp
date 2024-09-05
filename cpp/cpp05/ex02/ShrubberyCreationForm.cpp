#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
name(other.name), levelSign(other.levelSign), levelExec(other.levelExec)
{
	this->isSigned = other.isItSigned();
	std::cout << "ShrubberyCreationForm Copy constructor\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this == &other)
		return (*this);
	std::cout << "ShrubberyCreationForm copy assign constructor\n";
	ShrubberyCreationForm temp(other);
	std::swap (*this, temp);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}