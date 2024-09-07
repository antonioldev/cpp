#include "Bureaucrat.hpp"

/*******************************************************************/
/*                           CONSTRUCTOR                           */
/*******************************************************************/
Bureaucrat::Bureaucrat(void) : name("Unknow"), grade(150)
{
	std::cout << getName() << " have been created\n";
}

Bureaucrat::Bureaucrat(std::string new_name, int new_grade) : name(new_name), grade(new_grade)
{
	if (new_grade < 1)
	{
		std::cout << "Error when creating " << name;
		throw GradeTooHighException();
	}
	else if (new_grade > 150)
	{
		std::cout << "Error when creating " << name;
		throw GradeTooLowException();
	}
	std::cout << getName() << " have been created\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	std::cout << "Copy constructor\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Copy assign constructor\n";
	Bureaucrat temp(other);
	std::swap (*this, temp);
	return (*this);
}


/*******************************************************************/
/*                          DECONSTRUCTOR                          */
/*******************************************************************/

Bureaucrat::~Bureaucrat()
{

}

/*******************************************************************/
/*                              GETTER                             */
/*******************************************************************/

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

/*******************************************************************/
/*                               SETTER                            */
/*******************************************************************/

void Bureaucrat::increaseGrade()
{
	if (grade == 1)
	{
		std::cout << "Can't increase the grade ";
		throw GradeTooHighException();
	}
	grade--;
}

void Bureaucrat::decreaseGrade()
{
	if (grade == 150)
	{
		std::cout << "Can't decrease the grade ";
		throw GradeTooLowException();
	}
	grade++;
}

void Bureaucrat::signForm(const Form& Form) const
{
	if (this->getGrade() > Form.getLevelSign())
	{
		std::cout << C << this->getName() << RST;
		std::cout << " couldn’t sign ";
		std::cout <<  C << Form.getName() << RST ;
		std::cout << " because ";
		throw GradeTooLowException();
	}
	std::cout << C << this->getName() << RST << " signed " << C << Form.getName() << RST << std::endl;
}

/*******************************************************************/
/*                             EXCEPTION                           */
/*******************************************************************/

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return (" grade too low\n");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return (" grade too high\n");
};

/*******************************************************************/
/*                             OVERLOAD                            */
/*******************************************************************/

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat)
{
	os << Bureaucrat.getName();
	os << ", bureaucrat grade ";
	os << Bureaucrat.getGrade();
	os << ".";
	return (os);
}