#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/
AForm::AForm() : name("Empty"), target("Unknow") ,levelSign(150), levelExec(150)
{
	isSigned = false;
	// std::cout << name << " Aform created\n";
}

AForm::AForm(std::string new_name, std::string new_target ,int newLevelSign, int newLevelExec) :
name(new_name), target(new_target), levelSign(newLevelSign), levelExec(newLevelExec)
{
	isSigned = false;
	if (newLevelSign < 1 || newLevelExec < 1)
	{
		std::cout << "Error when creating " << name;
		throw GradeTooHighException();
	}
	else if (newLevelSign > 150 || newLevelExec > 150)
	{
		std::cout << "Error when creating " << name;
		throw GradeTooLowException();
	}
	std::cout << name << " Aform created\n";
}

AForm::AForm(const AForm& other) :
name(other.name), levelSign(other.levelSign), levelExec(other.levelExec)
{
	this->isSigned = other.isItSigned();
	std::cout << "AForm Copy constructor\n";
}

AForm& AForm::operator=(const AForm& other)
{
	if (this == &other)
		return (*this);
	// std::cout << "AForm copy assign constructor\n";
	// AForm temp(other);
	// std::swap (*this, temp);
	return (*this);
}

/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/
AForm::~AForm()
{
	
}

/*******************************************************************/
/*                              GETTER                             */
/*******************************************************************/
std::string AForm::getName() const
{
	return (this->name);
}

std::string AForm::getTarget() const
{
	return (this->target);
}

int AForm::getLevelSign() const
{
	return (this->levelSign);
}

int AForm::getLevelExec() const
{
	return (this->levelExec);
}

bool AForm::isItSigned() const
{
	return (this->isSigned);	
}

/*******************************************************************/
/*                              SETTER                             */
/*******************************************************************/
void AForm::beSigned(const Bureaucrat& Bureaucrat)
{
	if (this->isItSigned() == true)
	{
		std::cout << R << this->getName() << RST;
		throw AFormAlreadySignedException();
	}
	if (Bureaucrat.getGrade() > this->getLevelSign())
	{
		throw GradeTooLowException();
	}
	this->isSigned = true;
}

/*******************************************************************/
/*                             OVERLOAD                            */
/*******************************************************************/

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	os << "AForm Name: ";
	os << G << AForm.getName() << RST;
	os << "\nTo sign it needs level: ";
	os << G << AForm.getLevelSign() << RST;
	os << ", to execute it needs level: ";
	os << G << AForm.getLevelExec() << RST;
	if (AForm.isItSigned())
		os << G << "\nForm is signed." << RST;
	else
		os << R << "\nForm is NOT signed." << RST;
	return (os);
}

/*******************************************************************/
/*                             EXCEPTION                           */
/*******************************************************************/

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return (" -> Grade too low\n");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return (" -> Grade too high\n");
};

const char *AForm::AFormAlreadySignedException::what(void) const throw()
{
	return (" -> form Already signed!\n");
};

const char *AForm::AFormNotSignedException::what(void) const throw()
{
	return (" -> form is not signed!\n");
};

/*******************************************************************/
/*                             EXCECUTION                          */
/*******************************************************************/

AForm* AForm::makeForm(std::string form_name, std::string target_name)
{
	AForm* form = 0;
	form = ShrubberyCreationForm::makeForm(form, form_name, target_name);
	form = RobotomyRequestForm::makeForm(form, form_name, target_name);
	form = PresidentialPardonForm::makeForm(form, form_name, target_name);
	return (form);
}