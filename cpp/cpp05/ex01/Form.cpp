#include "Form.hpp"

/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/
Form::Form() : name("Empty"), levelSign(150), levelExec(150)
{
	isSigned = false;
	std::cout << name << " form created\n";
}

Form::Form(std::string new_name, int newLevelSign, int newLevelExec) :
name(new_name), levelSign(newLevelSign), levelExec(newLevelExec)
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
	std::cout << name << " form created\n";
}

Form::Form(const Form& other) :
name(other.name), levelSign(other.levelSign), levelExec(other.levelExec)
{
	this->isSigned = other.isItSigned();
	std::cout << "Form Copy constructor\n";
}

Form& Form::operator=(const Form& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Form copy assign constructor\n";
	Form temp(other);
	std::swap (*this, temp);
	return (*this);
}

/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/
Form::~Form()
{

}

/*******************************************************************/
/*                              GETTER                             */
/*******************************************************************/
std::string Form::getName() const
{
	return (this->name);
}

int Form::getLevelSign() const
{
	return (this->levelSign);
}

int Form::getLevelExec() const
{
	return (this->levelExec);
}

bool Form::isItSigned() const
{
	return (this->isSigned);	
}

/*******************************************************************/
/*                              SETTER                             */
/*******************************************************************/
void Form::beSigned(const Bureaucrat& Bureaucrat)
{
	if (this->isItSigned() == true)
		throw FormAlreadySignedException();
	if (Bureaucrat.getGrade() > this->getLevelSign())
	{
		throw GradeTooLowException();
	}
	this->isSigned = true;
	// Bureaucrat.signForm(*this);
}

/*******************************************************************/
/*                             OVERLOAD                            */
/*******************************************************************/

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
	os << "Form Name: ";
	os << G << Form.getName() << RST;
	os << "\nTo sign it needs level: ";
	os << G << Form.getLevelSign() << RST;
	os << ", to execute it needs level: ";
	os << G << Form.getLevelExec() << RST;
	if (Form.isItSigned())
		os << G << "\nForm is signed." << RST;
	else
		os << R << "\nForm is NOT signed." << RST;
	return (os);
}

/*******************************************************************/
/*                             EXCEPTION                           */
/*******************************************************************/

const char *Form::GradeTooLowException::what(void) const throw()
{
	return (" -> Grade too low\n");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return (" -> Grade too high\n");
};

const char *Form::FormAlreadySignedException::what(void) const throw()
{
	return (" -> Form Already signed!\n");
};